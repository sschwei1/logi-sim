#ifndef OR_GATE_HPP
#define OR_GATE_HPP

#include "./gate.hpp"

namespace gate
{
    class OR : public BaseGate
    {
    public:
        OR(int numInputs = 2);
        bool getOutput(GateCache* cache = nullptr);
        std::string getIdentifier() const;
    };   
}

#endif