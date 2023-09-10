#ifndef LOGI_SIM_UI_HPP
#define LOGI_SIM_UI_HPP

#include <memory>
#include <stack>
#include <fstream>

#include <iostream>

#include "./states/state.hpp"
#include "./states/mainState.hpp"

#include <SFML/Graphics.hpp>

namespace ui {
    class LogiSim {
    private:
        sf::RenderWindow* window;
        sf::Event sfEvent;

        sf::Clock dtClock;
        float dt;

        std::stack<ui::state::State*> states;

        void initWindow();
        void initStates();

    public:
        LogiSim();
        virtual ~LogiSim();

        void endApplication();

        void updateDt();
        void updateSfmlEvent();
        void update();

        void render();
        void run();
    };
}

#endif