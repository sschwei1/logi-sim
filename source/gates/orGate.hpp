#ifndef OR_GATE_HPP
#define OR_GATE_HPP

#include "./gate.hpp"

class OrGate : public Gate
{
public:
    OrGate(int numInputs = 2);
    bool getOutput();
};

#endif