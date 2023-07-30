#include "./orGate.hpp"

OrGate::OrGate(int numInputs) : Gate(numInputs){ }

bool OrGate::getOutput()
{
    // no need to handle empty inputs as false, because adding
    // false values to an OR-Gate will not change its outcome

    return std::any_of(
        inputs.begin(),
        inputs.end(),
        [](Gate* input) {
            return input->getOutput();
        }
    );
}