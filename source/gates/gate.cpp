#include "./gate.hpp"

// set number of inputs, if number is less than 1, automatically set to 1,
// in case you do not want to have inputs, use default constructor
gate::BaseGate::BaseGate(int numInputs)
{
    this->id = xg::newGuid();
    this->numInputs = numInputs < 1 ? 1 : numInputs;
}

// in case a class inherits from Gate, but does not need any inputs
gate::BaseGate::BaseGate()
{
    this->id = xg::newGuid();
    this->numInputs = 0;
}

gate::BaseGate::~BaseGate()
{
}

bool gate::BaseGate::addInput(BaseGate* input)
{
    if (inputs.size() < numInputs)
    {
        inputs.push_back(input);
        return true;
    }

    return false;
}

bool gate::BaseGate::getOutputCached(GateCache* cache, bool clearCache)
{
    if(clearCache && cache != nullptr)
        cache->clear();

    if (cache != nullptr && cache->find(this->id) != cache->end())
    {
        std::cout << this->getIdentifier() << " (" << this->id << ") cached" << std::endl;
        return cache->at(this->id);
    }

    std::cout << this->getIdentifier() << " (" << this->id << ") called" << std::endl;

    bool output = this->getOutput(cache);

    if(cache != nullptr)
        (*cache)[this->id] = output;

    return output;
}