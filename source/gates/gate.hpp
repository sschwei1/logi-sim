#ifndef GATE_HPP
#define GATE_HPP

#include <vector>
#include <algorithm>
#include <memory>
#include <map>
#include <crossguid/guid.hpp>

#include "./interfacs/iIdentifyable.hpp"


namespace gate
{
    typedef std::map<xg::Guid, bool> GateCache;

    class BaseGate : public interface::IIdentifyable
    {
    public:
        xg::Guid id;

        BaseGate(int numInputs);
        virtual ~BaseGate();

        bool addInput(BaseGate* input);

        // handles calculation of output, using getCachedOutput for its inputs
        virtual bool getOutput(GateCache* cache = nullptr) = 0;

        // wraps getOutput and handling caching,
        // if no cache is provided, it will behave like getOutput
        bool getOutputCached(GateCache* cache, bool clearCache = false);

    protected:
        BaseGate();

        int numInputs;
        std::vector<BaseGate*> inputs;
    };
}

#endif