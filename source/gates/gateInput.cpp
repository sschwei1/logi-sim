#include "./gateInput.hpp"

gate::Input::Input(bool value) : BaseGate(0)
{
    this->value = value;
}

bool gate::Input::getOutput(GateCache* cache)
{
    return value;
}

void gate::Input::setOutput(bool value)
{
    this->value = value;
}

std::string gate::Input::getIdentifier() const
{
    return "Input";
}