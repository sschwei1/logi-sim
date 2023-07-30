#include "./andGate.hpp"

AndGate::AndGate(int numInputs) : Gate(numInputs){ }

bool AndGate::getOutput()
{
    // add handling in case not all inputs are set, empty inputs
    // are handled as false (so return false for AND-Gate)
    if (inputs.size() < numInputs)
    {
        return false;
    }

    return std::all_of(
        inputs.begin(),
        inputs.end(),
        [](Gate* input) {
            return input->getOutput();
        }
    );
}