#include "./gate.hpp"

// set number of inputs, if number is less than 1, automatically set to 1,
// in case you do not want to have inputs, use default constructor
Gate::Gate(int numInputs)
{
    this->numInputs = numInputs < 1 ? 1 : numInputs;
}

// in case a class inherits from Gate, but does not need any inputs
Gate::Gate()
{
    this->numInputs = 0;
}

Gate::~Gate()
{
}

bool Gate::addInput(Gate* input)
{
    if (inputs.size() < numInputs)
    {
        inputs.push_back(input);
        return true;
    }

    return false;
}