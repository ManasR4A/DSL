#pragma once
#include "GameObject.h"
#include <GL\glew.h>
#include <GL\freeglut.h>

class Rect : public GameObject {
public:
    float w;
    float h;

    Rect(float x, float y, float w, float h) {
        this->x = x;
        this->y = y;
        this->w = w;
        this->h = h;
    }

    virtual void Draw() override {
        glBegin(GL_POLYGON);
        glColor3f(color.r, color.g, color.b);
        glVertex2f(x, y);                    // bottom left
        glVertex2f(x + w, y);                    // bottom right
        glVertex2f(x + w, y + h);                    // top right
        glVertex2f(x, y + h);                    // top left
        glEnd();
    }

    virtual bool CheckCollision(GameObject* other) override {
        Rect* ra = (Rect*)this;
        Rect* rb = (Rect*)other;    // just assuming the other object is a Rect for this assignment

        float rax_min = ra->x;
        float rax_max = ra->x + ra->w;
        float ray_min = ra->y;
        float ray_max = ra->y + ra->h;
        float rbx_min = rb->x;
        float rbx_max = rb->x + rb->w;
        float rby_min = rb->y;
        float rby_max = rb->y + rb->h;

        if (
            rax_min < rbx_max &&
            rax_max > rbx_min &&
            ray_min < rby_max &&
            ray_max > rby_min
            )
            return true;
        return false;
    }
};

