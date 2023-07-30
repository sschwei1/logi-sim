#ifndef AND_GATE_HPP
#define AND_GATE_HPP

#include "./gate.hpp"

class AndGate : public Gate
{
public:
    AndGate(int numInputs = 2);
    bool getOutput();
};

#endif