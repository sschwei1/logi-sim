#include "./xorGate.hpp"

#include <iostream>

XorGate::XorGate(int numInputs) : Gate(numInputs){ }

bool XorGate::getOutput()
{
    // no need to handle empty inputs as false, because adding
    // false values to an XOR-Gate will not change its outcome
    int posInpCount = std::count_if(
        inputs.begin(),
        inputs.end(),
        [](Gate* input) {
            return input->getOutput();
        }
    );

    return posInpCount % 2 == 1;
}