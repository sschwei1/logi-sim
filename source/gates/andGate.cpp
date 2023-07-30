#include "./andGate.hpp"

gate::AND::AND(int numInputs) : BaseGate(numInputs){ }

bool gate::AND::getOutput()
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
        [](BaseGate* input) {
            return input->getOutput();
        }
    );
}