#ifndef GATE_INPUT_HPP
#define GATE_INPUT_HPP

#include "./gate.hpp"

namespace gate
{
    class Input : public BaseGate
    {
    public:
        Input(bool value);
        bool getOutput();
        void setOutput(bool value);

    private:
        bool value;
    };   
}

#endif