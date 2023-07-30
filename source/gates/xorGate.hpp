#ifndef XOR_GATE_HPP
#define XOR_GATE_HPP

#include "./gate.hpp"

class XorGate : public Gate
{
public:
    XorGate(int numInputs = 2);
    bool getOutput();
};

#endif