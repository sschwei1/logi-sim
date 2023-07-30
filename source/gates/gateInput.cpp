#include "./gateInput.hpp"

gate::Input::Input(bool value)
{
    this->value = value;
}

bool gate::Input::getOutput()
{
    return value;
}

void gate::Input::setOutput(bool value)
{
    this->value = value;
}