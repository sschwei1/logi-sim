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
    std::unique_ptr<gate::BaseGate> input1(new gate::Input(true));
    std::unique_ptr<gate::BaseGate> input2(new gate::Input(true));
    std::unique_ptr<gate::BaseGate> input3(new gate::Input(true));

    std::unique_ptr<gate::BaseGate> testGate(new gate::AND(3));

    std::cout << "add input1 / value = " << input1->getOutput() << " (added: " << testGate->addInput(input1.get()) << ")" << std::endl;
    std::cout << "add input2 / value = " << input2->getOutput() << " (added: " << testGate->addInput(input2.get()) << ")" << std::endl;
    std::cout << "add input3 / value = " << input3->getOutput() << " (added: " << testGate->addInput(input3.get()) << ")" << std::endl;

    std::cout << "Out: " << testGate->getOutput() << std::endl;

  return 0;
}