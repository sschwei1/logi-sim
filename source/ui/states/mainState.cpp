#include "./mainState.hpp"

ui::state::MainState::MainState(sf::RenderWindow* window) : State(window)
{
    this->rect.setSize(sf::Vector2f(100.f, 100.f));
    this->rect.setFillColor(sf::Color::White);
    this->rect.setPosition(100.f, 100.f);
}

ui::state::MainState::~MainState(){ }

void ui::state::MainState::endState()
{
    std::cout << "Ending MainState" << std::endl;
}

void ui::state::MainState::updateKeybinds(const float& dt)
{
    this->checkForQuit();

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
        this->rect.move(-100.f * dt, 0.f);
    }

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        this->rect.move(100.f * dt, 0.f);
    }

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
        this->rect.move(0.f, -100.f * dt);
    }

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
        this->rect.move(0.f, 100.f * dt);
    }
}

void ui::state::MainState::update(const float& dt)
{
    this->updateKeybinds(dt);
}

void ui::state::MainState::render(sf::RenderTarget* target)
{
    if(!target) {
        target = this->window;
    }

    target->draw(this->rect);
}