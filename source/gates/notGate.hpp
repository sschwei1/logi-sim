#ifndef NOT_GATE_HPP
#define NOT_GATE_HPP

#include "./gate.hpp"

namespace gate
{
    class NOT : public BaseGate
    {
    public:
        NOT();
        bool getOutput(GateCache* cache = nullptr);
        std::string getIdentifier() const;
    };   
}

#endif