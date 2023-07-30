#include <SFML/Graphics.hpp>
#include <iostream>
#include <memory>

#include "./gates/andGate.hpp"
#include "./gates/orGate.hpp"
#include "./gates/notGate.hpp"
#include "./gates/xorGate.hpp"
#include "./gates/gateInput.hpp"

int main()
{
    std::unique_ptr<Gate> input1(new GateInput(true));
    std::unique_ptr<Gate> input2(new GateInput(true));
    std::unique_ptr<Gate> input3(new GateInput(false));

    std::unique_ptr<Gate> testGate(new NotGate());

    std::cout << "add input1 / value = " << input1->getOutput() << " (added: " << testGate->addInput(input1.get()) << ")" << std::endl;
    std::cout << "add input2 / value = " << input2->getOutput() << " (added: " << testGate->addInput(input2.get()) << ")" << std::endl;
    std::cout << "add input3 / value = " << input3->getOutput() << " (added: " << testGate->addInput(input3.get()) << ")" << std::endl;

    std::cout << "Out: " << testGate->getOutput() << std::endl;

  return 0;
}