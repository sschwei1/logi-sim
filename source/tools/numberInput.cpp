#include "./numberInput.hpp"

gate::tools::NumberInput::NumberInput(int bits, int initialValue)
{
    for (int i = 0; i < bits; i++)
    {
        this->inputs.push_back(
            std::unique_ptr<gate::Input>(new gate::Input(false))
        );
    }

    this->bits = bits;
    this->setInputNumber(initialValue);
}

gate::BaseGate* gate::tools::NumberInput::getOutput(int bitNumber)
{
    if (bitNumber < 0 || bitNumber >= this->bits)
    {
        return nullptr;
    }

    return this->inputs[bitNumber].get();
}

bool gate::tools::NumberInput::getNthBit(int bitNumber)
{
    if (bitNumber < 0 || bitNumber >= this->bits)
    {
        return false;
    }

    return (this->value >> bitNumber) & 1;
}

int gate::tools::NumberInput::getBitCount()
{
    return this->bits;
}

bool gate::tools::NumberInput::setInputNumber(int value)
{
    if (value < 0 || value > this->getMaxNumber())
    {
        this->setInputNumber(0);
        return false;
    }

    this->value = value;

    for (int i = 0; i < bits; i++)
    {
        bool value = this->getNthBit(i);
        this->inputs[i]->setOutput(value);
    }

    return true;
}

int gate::tools::NumberInput::getInputNumber()
{
    return this->value;
}

int gate::tools::NumberInput::getMaxNumber()
{
    return std::pow(2, this->bits) - 1;
}