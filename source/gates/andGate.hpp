#ifndef AND_GATE_HPP
#define AND_GATE_HPP

#include "./gate.hpp"

namespace gate {
    class AND : public BaseGate
    {
    public:
        AND(int numInputs = 2);
        bool getOutput(GateCache* cache = nullptr);
        std::string getIdentifier() const;
    };
};

#endif