#ifndef I_IDENTIFYABLE_HPP
#define I_IDENTIFYABLE_HPP

#include <string>

namespace gate::interface {
    class IIdentifyable
    {
    public:
        virtual std::string getIdentifier() const = 0;
    };   
}

#endif