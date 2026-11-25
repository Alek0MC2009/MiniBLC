#include "Object.h"

Object::Object()
    : depth(0),
    spriteIndex(nullptr),
    imageIndex(0),
    imageXScale(1),
    imageYScale(1),
    x(0),
    y(0)
{
}

void Object::Create()
{
}

void Object::Step(float fElapsedTime)
{
}

void Object::Draw()
{
}

void Object::Destroy()
{
}

void Object::SetSprite(const char* path)
{
    spriteIndex = std::make_unique<SpriteBLC>(path);
}

SpriteBLC* Object::GetSprite()
{
    return spriteIndex.get();
}

Object::~Object()
{
    Destroy();
}

void Object::SetGame(Game* gameInstance) {
    game = gameInstance;
}