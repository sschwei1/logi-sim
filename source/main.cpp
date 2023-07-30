#include <SFML/Graphics.hpp>
#include <iostream>
#include <memory>

#include "./gates/andGate.hpp"
#include "./gates/orGate.hpp"
#include "./gates/gateInput.hpp"

int main()
{
    std::unique_ptr<Gate> input1(new GateInput(false));
    std::unique_ptr<Gate> input2(new GateInput(false));
    std::unique_ptr<Gate> input3(new GateInput(true));

    std::unique_ptr<Gate> testGate(new OrGate(3));

    std::cout << "add input1: " << testGate->addInput(input1.get()) << std::endl;
    std::cout << "add input2: " << testGate->addInput(input2.get()) << std::endl;
    std::cout << "add input3: " << testGate->addInput(input3.get()) << std::endl;

    std::cout << "Out: " << testGate->getOutput() << std::endl;

  return 0;
}