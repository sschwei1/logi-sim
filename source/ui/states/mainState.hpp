#ifndef MAIN_STATE_HPP
#define MAIN_STATE_HPP

#include <iostream>

#include "./state.hpp"

namespace ui::state
{
    class MainState : public State
    {
    private:
        sf::RectangleShape rect;
        sf::Font font;

    public:
        MainState(sf::RenderWindow* window);
        virtual ~MainState();

        void endState();
        void updateKeybinds(const float& dt);
        void update(const float& dt);
        void render(sf::RenderTarget* target = nullptr);
    };
}


#endif