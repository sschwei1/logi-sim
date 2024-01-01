#include "./orGate.hpp"

gate::OR::OR(int numInputs) : BaseGate(numInputs){ }

bool gate::OR::getOutput(GateCache* cache)
{
    // no need to handle empty inputs as false, because adding
    // false values to an OR-Gate will not change its outcome

    return std::any_of(
        inputs.begin(),
        inputs.end(),
        [cache](BaseGate* input) {
            return input->getOutputCached(cache);
        }
    );
}

std::string gate::OR::getIdentifier() const
{
    return "OR-Gate";
}