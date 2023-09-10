#include "./state.hpp"

ui::state::State::State(sf::RenderWindow* window)
{
    this->window = window;
    this->quit = false;
}

ui::state::State::~State(){ }

const bool& ui::state::State::getQuit() const
{
    return this->quit;
}

void ui::state::State::checkForQuit()
{
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
        this->quit = true;
    }
}