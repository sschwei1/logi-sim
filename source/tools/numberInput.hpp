#ifndef NUMBER_INPUT_HPP
#define NUMBER_INPUT_HPP

#include <vector>
#include <memory>
#include <cmath>

#include "../gates/gate.hpp"
#include "../gates/gateInput.hpp"

namespace gate::tools
{
    // NumberInput is used to store and modify multiple inputs
    class NumberInput
    {
    public:
        NumberInput(int bits = 4, int initialValue = 0);
        BaseGate* getOutput(int bitNumber);

        bool getNthBit(int bitNumber);
        int getBitCount();

        bool setInputNumber(int value);
        int getInputNumber();

        int getMaxNumber();

    private:
        int bits;
        int value;
        std::vector<std::unique_ptr<gate::Input>> inputs;
    };   
}

#endif