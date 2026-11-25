#pragma once
#include "Engine.h"
#include <memory>
#include "SpriteOrigin.h"
#include "Hitbox.h"
class SpriteBLC {
private:
    std::unique_ptr<olc::Sprite> image;
    std::unique_ptr<SpriteOrigin> origin;
    // Por seguridad, puedes declarar explícitamente que no se puede copiar:
    SpriteBLC(const SpriteBLC&) = delete;
    SpriteBLC& operator=(const SpriteBLC&) = delete;

    std::unique_ptr<Hitbox> hitbox;
public:
    SpriteBLC(const char* path);
    olc::Sprite* getImage();

    int getWidth();
    int getHeight();
    void setOrigin(SpriteOrigin::Origin newOrigin = SpriteOrigin::Origin::TOP_LEFT, int x = 0, int y = 0);
    olc::vi2d getOrigin();
    void setHitbox(int x, int y, int width, int height);
    Hitbox* getHitbox();
    

};