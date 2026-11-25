#pragma once
#include "Engine.h"
class SpriteOrigin
{
public:
    enum class Origin {
        TOP_LEFT,
        TOP_CENTER,
        TOP_RIGHT,
        CENTER_LEFT,
        CENTER,
        CENTER_RIGHT,
        BOTTOM_LEFT,
        BOTTOM_CENTER,
        BOTTOM_RIGHT,
        CUSTOM
    };
    SpriteOrigin();
    void SetOrigin(Origin newOrigin, int x = 0, int y = 0);

    Origin GetOrigin() const;

    int GetOriginX(int width) const;
    int GetOriginY(int height) const;
    olc::vi2d GetFullOrigin(int width, int height);
private:
    Origin origin = Origin::TOP_LEFT;

    int customX = 0;
    int customY = 0;
};