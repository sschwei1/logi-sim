#ifndef XOR_GATE_HPP
#define XOR_GATE_HPP

#include "./gate.hpp"

namespace Gate
{
    class XOR : public BaseGate
    {
    public:
        XOR(int numInputs = 2);
        bool getOutput();
    };   
}

#endif