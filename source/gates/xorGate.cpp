#include "./xorGate.hpp"

#include <iostream>

Gate::XOR::XOR(int numInputs) : BaseGate(numInputs){ }

bool Gate::XOR::getOutput()
{
    // no need to handle empty inputs as false, because adding
    // false values to an XOR-Gate will not change its outcome

    int posInpCount = std::count_if(
        inputs.begin(),
        inputs.end(),
        [](BaseGate* input) {
            return input->getOutput();
        }
    );

    return posInpCount % 2 == 1;
}