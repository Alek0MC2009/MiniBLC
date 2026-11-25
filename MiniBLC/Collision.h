#pragma once
#include "Object.h"
#include "Hitbox.h"
class Collision {
public:
    static bool PlaceMeeting(Object* object, int x, int y, Object* target);
    static bool Intersects(Hitbox a, Hitbox b);
};