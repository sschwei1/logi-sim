#ifndef GATE_HPP
#define GATE_HPP

#include <vector>
#include <algorithm>
#include <memory>

class Gate
{
public:
    Gate(int numInputs);
    virtual ~Gate();

    bool addInput(Gate* input);

    virtual bool getOutput() = 0;

protected:
    Gate();

    int numInputs;
    std::vector<Gate*> inputs;
};

#endif // GATE_HPP