
#include "SpriteBLC.h"
#include <memory>

SpriteBLC::SpriteBLC(const char* path)
    : image(std::make_unique<olc::Sprite>(path))
{
}

olc::Sprite* SpriteBLC::getImage() {
    return image.get();
}

int SpriteBLC::getWidth() {
    return image->width;
}

int SpriteBLC::getHeight() {
    return image->height;
}

void SpriteBLC::setOrigin(SpriteOrigin::Origin newOrigin, int x, int y) {
    if (!origin) {
        origin = std::make_unique<SpriteOrigin>();
    }

    origin->SetOrigin(newOrigin, x, y);
}

olc::vi2d SpriteBLC::getOrigin() {
    if (!origin) {
        origin = std::make_unique<SpriteOrigin>();
    }

    return origin->GetFullOrigin(getWidth(), getHeight());
}

Hitbox* SpriteBLC::getHitbox() {
    if (!hitbox) {
        hitbox = std::make_unique<Hitbox>(
            0, 0, getWidth(), getHeight()
        );
    }

    return hitbox.get();
}

void SpriteBLC::setHitbox(int x, int y, int width, int height) {
    hitbox = std::make_unique<Hitbox>(x, y, width, height);
}
