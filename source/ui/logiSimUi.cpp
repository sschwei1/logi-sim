#include "./logiSimUi.hpp"

void ui::LogiSim::initWindow()
{
    // todo: add config file
    std::ifstream ifs("./config/window.ini");

    //? default values in case the config file can't be opened
    std::string title = "Logi Sim";
    sf::VideoMode windowBounds(800, 600);
    unsigned framerateLimit = 120;
    bool verticalSyncEnabled = false;

    if(ifs.is_open()) {
        std::getline(ifs, title);
        ifs >> windowBounds.width >> windowBounds.height;
        ifs >> framerateLimit;
        ifs >> verticalSyncEnabled;
    }

    ifs.close();

    this->window = new sf::RenderWindow(
        windowBounds,
        title,
        sf::Style::Titlebar | sf::Style::Close
    );

    this->window->setFramerateLimit(framerateLimit);
    this->window->setVerticalSyncEnabled(verticalSyncEnabled);
}

void ui::LogiSim::initStates()
{
    this->states.push(new ui::state::MainState(this->window));
}

ui::LogiSim::LogiSim()
{
    this->initWindow();
    this->initStates();
}

ui::LogiSim::~LogiSim()
{
    while(!this->states.empty()) {
        delete this->states.top();
        this->states.pop();
    }
    
    delete this->window;
}

void ui::LogiSim::endApplication()
{
    std::cout << "Ending application" << std::endl;
}

void ui::LogiSim::updateDt()
{
    this->dt = this->dtClock.restart().asSeconds();
}

void ui::LogiSim::updateSfmlEvent()
{
    while(this->window->pollEvent(this->sfEvent)) {
        if(this->sfEvent.type == sf::Event::Closed) {
            this->window->close();
        }
    }
}

void ui::LogiSim::update()
{
    this->updateSfmlEvent();

    if(!this->states.empty()) {
        this->states.top()->update(this->dt);

        if(this->states.top()->getQuit()) {
            this->states.top()->endState();
            delete this->states.top();
            this->states.pop();
        }
    } else {
        this->endApplication();
        this->window->close();
    }
}

void ui::LogiSim::render()
{
    this->window->clear();

    if(!this->states.empty()) {
        this->states.top()->render();
    }

    this->window->display();
}

void ui::LogiSim::run()
{
    while(this->window->isOpen()) {
        this->updateDt();
        this->update();
        this->render();
    }
}