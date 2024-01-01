#ifndef GATE_INPUT_HPP
#define GATE_INPUT_HPP

#include "./gate.hpp"

namespace gate
{
    class Input : public BaseGate
    {
    public:
        Input(bool value);
        bool getOutput(GateCache* cache = nullptr);
        void setOutput(bool value);
        std::string getIdentifier() const;
    private:
        bool value;
    };   
}

#endif