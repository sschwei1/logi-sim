#include <SFML/Graphics.hpp>
#include <iostream>
#include <memory>

#include "./gates/andGate.hpp"
#include "./gates/orGate.hpp"
#include "./gates/notGate.hpp"
#include "./gates/xorGate.hpp"
#include "./gates/gateInput.hpp"

#include "./tools/numberInput.hpp"

int main()
{
    std::unique_ptr<gate::tools::NumberInput> numInput(
        new gate::tools::NumberInput(8, 0)
    );

    std::cout << "Max Number: " << numInput->getMaxNumber() << std::endl;

    for(int i = 0; i <= numInput->getMaxNumber(); i++) {
        numInput->setInputNumber(i);
        for(int j = numInput->getBitCount() - 1; j >= 0; j--) {
            std::cout << numInput->getNthBit(j) << " ";
        }
        std::cout << "| " << numInput->getInputNumber() << std::endl;
    }

    return 0;
}