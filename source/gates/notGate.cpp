#include "./notGate.hpp"

// set inputNum to 1, because a NOT-Gate only has one input
gate::NOT::NOT() : BaseGate(1){ }

bool gate::NOT::getOutput(GateCache* cache)
{
    // incase no input is set, always return false
    if(inputs.size() < 1)
        return false;

    return !inputs[0]->getOutputCached(cache);
}

std::string gate::NOT::getIdentifier() const
{
    return "NOT-Gate";
}