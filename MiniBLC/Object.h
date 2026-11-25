#pragma once

#include "Engine.h"
#include "SpriteBLC.h"
#include <memory>

class Game;

class Object {
protected:
    int depth;
    std::unique_ptr<SpriteBLC> spriteIndex;
    int imageIndex;
    int imageXScale;
    int imageYScale;

    Game* game = nullptr;

public:
    float x;
    float y;

    Object();

    void SetGame(Game* gameInstance);

    virtual void Create();
    virtual void Step(float fElapsedTime);
    virtual void Draw();
    virtual void Destroy();

    void SetSprite(const char* path);
    SpriteBLC* GetSprite();

    virtual ~Object();
};