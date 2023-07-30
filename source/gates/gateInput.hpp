#ifndef GATE_INPUT_HPP
#define GATE_INPUT_HPP

#include "./gate.hpp"

class GateInput : public Gate
{
public:
    GateInput(bool value);
    bool getOutput();

private:
    bool value;
};

#endif