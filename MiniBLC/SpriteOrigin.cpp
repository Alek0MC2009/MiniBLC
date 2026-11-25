#include "SpriteOrigin.h"
#include "Engine.h"
void SpriteOrigin::SetOrigin(Origin newOrigin, int x, int y)
{
    origin = newOrigin;

    if (newOrigin == Origin::CUSTOM) {
        customX = x;
        customY = y;
    }
}

SpriteOrigin::SpriteOrigin() {
    origin = Origin::TOP_LEFT;
    customX = 0;
	customY = 0;
}

SpriteOrigin::Origin SpriteOrigin::GetOrigin() const
{
    return origin;
}

int SpriteOrigin::GetOriginX(int width) const
{
    switch (origin) {
    case Origin::TOP_CENTER:
    case Origin::CENTER:
    case Origin::BOTTOM_CENTER:
        return width / 2;

    case Origin::TOP_RIGHT:
    case Origin::CENTER_RIGHT:
    case Origin::BOTTOM_RIGHT:
        return width;

    case Origin::CUSTOM:
        return customX;

    default:
        return 0;
    }
}

int SpriteOrigin::GetOriginY(int height) const
{
    switch (origin) {
    case Origin::CENTER_LEFT:
    case Origin::CENTER:
    case Origin::CENTER_RIGHT:
        return height / 2;

    case Origin::BOTTOM_LEFT:
    case Origin::BOTTOM_CENTER:
    case Origin::BOTTOM_RIGHT:
        return height;

    case Origin::CUSTOM:
        return customY;

    default:
        return 0;
    }
}

olc::vi2d SpriteOrigin::GetFullOrigin(int width, int height) {
    return olc::vi2d(GetOriginX(width), GetOriginY(height));
}