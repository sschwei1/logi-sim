#ifndef GATE_HPP
#define GATE_HPP

#include <vector>
#include <algorithm>
#include <memory>

namespace gate
{
    class BaseGate
    {
    public:
        BaseGate(int numInputs);
        virtual ~BaseGate();

        bool addInput(BaseGate* input);

        virtual bool getOutput() = 0;

    protected:
        BaseGate();

        int numInputs;
        std::vector<BaseGate*> inputs;
    };   
}

#endif