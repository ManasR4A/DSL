#pragma once
#include "GameObject.h"
class Text :
    public GameObject
{
public:
    string text;

    virtual void Draw() override;
    virtual bool CheckCollision(GameObject* other) override;

};

