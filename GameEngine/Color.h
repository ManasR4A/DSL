#pragma once

#include <string>
using namespace std;

struct Color {
    float r;
    float g;
    float b;
    float a;

    Color() {
        r = 0.0f;
        g = 0.0f;
        b = 0.0f;
        a = 1.0f;
    }

    Color(float r, float g, float b) {
        this->r = r;
        this->g = g;
        this->b = b;
        this->a = 1.0f;
    }

    Color(string hex)
    {
        int i = 0;
        if (hex[0] == '#')
            i++;

        string rStr = "0x" + hex.substr(i, 2);
        r = stol(rStr, nullptr, 16) / 255.0f;
        i += 2;

        string gStr = "0x" + hex.substr(i, 2);
        g = stol(gStr, nullptr, 16) / 255.0f;
        i += 2;

        string bStr = "0x" + hex.substr(i, 2);
        b = stol(bStr, nullptr, 16) / 255.0f;
        i += 2;

        if (hex.length() >= i + 2)
        {
            string aStr = "0x" + hex.substr(i, 2);
            a = stol(bStr, nullptr, 16) / 255.0f;
        }
        else
            a = 1.0f;
    }

    string toString()
    {
        string s = "#";
        return s;
    }
};
