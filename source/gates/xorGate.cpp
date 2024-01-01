#include "./xorGate.hpp"

#include <iostream>

gate::XOR::XOR(int numInputs) : BaseGate(numInputs){ }

bool gate::XOR::getOutput(GateCache* cache)
{
    // no need to handle empty inputs as false, because adding
    // false values to an XOR-Gate will not change its outcome

    int posInpCount = std::count_if(
        inputs.begin(),
        inputs.end(),
        [cache](BaseGate* input) {
            return input->getOutputCached(cache);
        }
    );

    return posInpCount % 2 == 1;
}

std::string gate::XOR::getIdentifier() const
{
    return "XOR-Gate";
}