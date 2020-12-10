#pragma once

#include <string>
using namespace std;

#include "Color.h"

class GameObject {
public:
    GameObject();

    virtual void Draw() = 0;
    virtual bool CheckCollision(GameObject* other) = 0;

    string name;
    Color color;

    float x;
    float y;

    bool collides = false;
    bool active = true;
};
