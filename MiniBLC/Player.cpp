#include "Player.h"
#include "Game.h"

void Player::Create()
{
    SetSprite("assets/player.png");
}

void Player::Step(float fElapsedTime)
{
    if (game == nullptr)
        return;

    float speed = 150.0f;

    if (game->GetKey(olc::Key::UP).bHeld)
        y -= speed * fElapsedTime;

    if (game->GetKey(olc::Key::DOWN).bHeld)
        y += speed * fElapsedTime;

    if (game->GetKey(olc::Key::LEFT).bHeld)
        x -= speed * fElapsedTime;

    if (game->GetKey(olc::Key::RIGHT).bHeld)
        x += speed * fElapsedTime;
}

void Player::Draw()
{
    if (game == nullptr || GetSprite() == nullptr)
        return;

    game->DrawSprite(
        static_cast<int>(x),
        static_cast<int>(y),
        GetSprite()->getImage()
    );
}