#ifndef OR_GATE_HPP
#define OR_GATE_HPP

#include "./gate.hpp"

namespace Gate
{
    class OR : public BaseGate
    {
    public:
        OR(int numInputs = 2);
        bool getOutput();
    };   
}

#endif