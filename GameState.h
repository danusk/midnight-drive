#pragma once

#include "Background.h"
#include "Obstacle.h"
#include "Player.h"
#include "MainMenu.h"
#include <SFML/Graphics.hpp>

class GameState
{
private:
    sf::Clock obstacleClock;
    sf::Font font;
    sf::Text health_text;
    sf::RenderWindow window_;
    std::vector<Obstacle*> obstacles_;
    Player player_ = Player();
    Background background_ = Background();

    void setWindow();
    void spawnObstacles();
    void moveObstacles();
    void drawGame();
    void checkPlayerObstacleCollisions();

public:
    GameState() {};
    ~GameState() {};    
    void handleEvent(sf::Event& event);
    void runGame();
    void createMenu();
    void startDriving();
    Obstacle* createObstacles(const size_t windowWidth);
};
