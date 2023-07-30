#include "./gateInput.hpp"

GateInput::GateInput(bool value)
{
    this->value = value;
}

bool GateInput::getOutput()
{
    return value;
}