#include "./notGate.hpp"

// set inputNum to 1, because a NOT-Gate only has one input
NotGate::NotGate() : Gate(1){ }

bool NotGate::getOutput()
{
    // incase no input is set, always return false
    if(inputs.size() < 1)
        return false;

    return !inputs[0]->getOutput();
}