#ifndef NOT_GATE_HPP
#define NOT_GATE_HPP

#include "./gate.hpp"

class NotGate : public Gate
{
public:
    NotGate();
    bool getOutput();
};

#endif