#include "./gateInput.hpp"

Gate::Input::Input(bool value)
{
    this->value = value;
}

bool Gate::Input::getOutput()
{
    return value;
}