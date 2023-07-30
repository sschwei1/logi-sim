#include "./orGate.hpp"

gate::OR::OR(int numInputs) : BaseGate(numInputs){ }

bool gate::OR::getOutput()
{
    // no need to handle empty inputs as false, because adding
    // false values to an OR-Gate will not change its outcome

    return std::any_of(
        inputs.begin(),
        inputs.end(),
        [](BaseGate* input) {
            return input->getOutput();
        }
    );
}