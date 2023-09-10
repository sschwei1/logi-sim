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
    ui::LogiSim logiSim;
    logiSim.run();

    return 0;

    // std::unique_ptr<gate::tools::NumberInput> numInput(
    //     new gate::tools::NumberInput(3, 0)
    // );

    // std::unique_ptr<gate::XOR> xorGate1(new gate::XOR());
    // std::unique_ptr<gate::XOR> xorGate2(new gate::XOR());
    // std::unique_ptr<gate::AND> andGate1(new gate::AND());
    // std::unique_ptr<gate::AND> andGate2(new gate::AND());
    // std::unique_ptr<gate::OR> orGate1(new gate::OR());

    // xorGate1->addInput(numInput->getOutput(2));
    // xorGate1->addInput(numInput->getOutput(1));

    // xorGate2->addInput(xorGate1.get());
    // xorGate2->addInput(numInput->getOutput(0));

    // andGate1->addInput(xorGate1.get());
    // andGate1->addInput(numInput->getOutput(0));

    // andGate2->addInput(numInput->getOutput(2));
    // andGate2->addInput(numInput->getOutput(1));

    // orGate1->addInput(andGate1.get());
    // orGate1->addInput(andGate2.get());


    // std::cout
    //     << "A B C | s c" << std::endl
    //     << "------+----" << std::endl;
        
    // for(int i = 0; i <= numInput->getMaxNumber(); i++)
    // {
    //     numInput->setInputNumber(i);
    //     for(int j = numInput->getBitCount() - 1; j >= 0; j--)
    //     {
    //         std::cout << numInput->getNthBit(j) << " ";
    //     }

    //     std::cout
    //         << "| " << xorGate2->getOutput()
    //         << " " << orGate1->getOutput()
    //         << std::endl;
    // }

    return 0;
}