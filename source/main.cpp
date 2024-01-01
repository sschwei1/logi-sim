#include <SFML/Graphics.hpp>
#include <iostream>
#include <memory>

#include "./ui/logiSimUi.hpp"

#include "./gates/andGate.hpp"
#include "./gates/orGate.hpp"
#include "./gates/notGate.hpp"
#include "./gates/xorGate.hpp"
#include "./gates/gateInput.hpp"

#include "./tools/numberInput.hpp"

int main()
{
    gate::tools::NumberInput numInput(20, 8923);

    gate::XOR xorGate(10);
    gate::NOT notGate1;
    gate::NOT notGate2;
    gate::NOT notGate3;
    gate::NOT notGate4;
    gate::NOT notGate5;

    notGate1.addInput(numInput.getOutput(17));
    notGate2.addInput(&notGate1);
    notGate3.addInput(&notGate2);
    notGate4.addInput(&notGate3);
    notGate5.addInput(&notGate4);

    xorGate.addInput(&notGate5);
    xorGate.addInput(&notGate5);
    xorGate.addInput(&notGate4);
    xorGate.addInput(&notGate4);
    xorGate.addInput(&notGate3);
    xorGate.addInput(&notGate3);
    xorGate.addInput(&notGate2);
    xorGate.addInput(&notGate2);
    xorGate.addInput(&notGate1);
    xorGate.addInput(&notGate1);

    gate::GateCache cache;

    std::cout << "out: " << xorGate.getOutputCached(&cache, true) << std::endl;
    std::cout << "out: " << xorGate.getOutputCached(&cache, true) << std::endl;

    return 0;
}