#ifndef XOR_GATE_HPP
#define XOR_GATE_HPP

#include "./gate.hpp"

namespace gate
{
    class XOR : public BaseGate
    {
    public:
        XOR(int numInputs = 2);
        bool getOutput(GateCache* cache = nullptr);
        std::string getIdentifier() const;
    };   
}

#endif