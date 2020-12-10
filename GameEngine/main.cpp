#include "GameEngine.h"
#include "GameObject.h"
#include "Rect.h"
#include "MegaScryptGameObject.h"
#include "Text.h"

#include <fstream>
#include <string>
#include <vector>
using namespace std;

#include "MegaScrypt.h"
using namespace MegaScrypt;

GameEngine* gameEngine;

Any SpawnCircle(vector<Any> parameters)
{
    return Any();
}

Any SpawnRect(vector<Any> parameters)
{
    return Any();
}

Any DestroyObject(vector<Any> parameters)
{
    return Any();
}

Any Log(vector<Any> parameters)
{
    return Any();
}

Any Abs(vector<Any> parameters)
{
    return Any();
}

Any Min(vector<Any> parameters)
{
    return Any();
}

Any Max(vector<Any> parameters)
{
    return Any();
}

Any Random(vector<Any> parameters)
{
    return rand();
}

Any GameDrawText(vector<Any> parameters)
{
    return Any();
}

Any PlaySfx(vector<Any> parameters)
{
    return Any();
}

Any GetKey(vector<Any> parameters)
{
    return Any();
}

void Start()
{
    // TODO: invoke script start event
}

void Update(float deltaTime)
{
    // TODO: update script logic
    // TODO: perform collision detection
}

int main(int argc, char** argv) {

    // TODO: initialize MegaScrypt machine

    gameEngine = new GameEngine();
    gameEngine->Run(Start, Update);

    delete gameEngine;
    return 0;
}