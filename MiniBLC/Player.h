#pragma once

#include "Object.h"

class Player : public Object {
public:
    void Create() override;
    void Step(float fElapsedTime) override;
    void Draw() override;
};