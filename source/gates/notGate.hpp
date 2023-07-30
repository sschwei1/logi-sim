#ifndef NOT_GATE_HPP
#define NOT_GATE_HPP

#include "./gate.hpp"

namespace Gate
{
    class NOT : public BaseGate
    {
    public:
        NOT();
        bool getOutput();
    };   
}

#endif