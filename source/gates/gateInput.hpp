#ifndef GATE_INPUT_HPP
#define GATE_INPUT_HPP

#include "./gate.hpp"

namespace Gate
{
    class Input : public BaseGate
    {
    public:
        Input(bool value);
        bool getOutput();

    private:
        bool value;
    };   
}

#endif