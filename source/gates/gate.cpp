#include "./gate.hpp"

// set number of inputs, if number is less than 1, automatically set to 1,
// in case you do not want to have inputs, use default constructor
Gate::BaseGate::BaseGate(int numInputs)
{
    this->numInputs = numInputs < 1 ? 1 : numInputs;
}

// in case a class inherits from Gate, but does not need any inputs
Gate::BaseGate::BaseGate()
{
    this->numInputs = 0;
}

Gate::BaseGate::~BaseGate()
{
}

bool Gate::BaseGate::addInput(BaseGate* input)
{
    if (inputs.size() < numInputs)
    {
        inputs.push_back(input);
        return true;
    }

    return false;
}