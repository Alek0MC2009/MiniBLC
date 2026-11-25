#include "Game.h"

Game::Game() {
    sAppName = "BLC Engine";
}

bool Game::OnUserCreate() {
    return true;
}

bool Game::OnUserUpdate(float fElapsedTime) {

    Clear(olc::BLACK);

    for (auto& obj : objects) {
        obj->Step(fElapsedTime);
    }

    for (auto& obj : objects) {
        obj->Draw();
    }

    return true;
}