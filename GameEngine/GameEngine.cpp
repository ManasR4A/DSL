#include "GameEngine.h"

GameEngine* GameEngine::instance = NULL;

static void display()
{
    GameEngine::instance->Display();
}

static void idle()
{
    GameEngine::instance->Idle();
}

static void reshape(int w, int h)
{
    GameEngine::instance->Reshape(w, h);
}

static void keyboard(unsigned char key, int x, int y)
{
    GameEngine::instance->Keyboard(key, x, y);
}

void setupGL()
{
    int argc = 0;
    char* argv = new char[0];
    glutInit(&argc, &argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowSize(640, 480);                    // window size
    glutInitWindowPosition(50, 50);                // distance from the top-left screen
    glutCreateWindow("EAE6330 C++ Game Engine");    // message displayed on top bar window
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutIdleFunc(idle);
}

GameEngine::GameEngine()
{
    GameEngine::instance = this;
}

void GameEngine::Run(GameEngine::StartCallback startCallback, GameEngine::UpdateCallback updateCallback)
{
    this->startCallback = startCallback;
    this->updateCallback = updateCallback;

    setupGL();
    startCallback();
    glutMainLoop();
}

void GameEngine::Display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    // render
    for (int i = 0; i < sceneGraph.size(); i++)
    {
        if (!sceneGraph[i]->active)
            continue;
        sceneGraph[i]->Draw();
    }
    //glFlush();
    glutSwapBuffers();
}

void GameEngine::Idle()
{
    while (true)
    {
        chrono::time_point<chrono::high_resolution_clock> curFrameTime = chrono::high_resolution_clock::now();
        chrono::milliseconds delta = chrono::duration_cast<chrono::milliseconds>(curFrameTime - lastFrameTime);
        lastDeltaTime = (int)delta.count();
        if (lastDeltaTime >= targetMillis)
            break;
    }
    lastFrameTime = chrono::high_resolution_clock::now();
    updateCallback(getDeltaTime());
    keysDown.clear();
    glutPostRedisplay();
}

void GameEngine::Reshape(int w, int h)
{
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, w, 0, h);
    glMatrixMode(GL_MODELVIEW);
}

void GameEngine::Keyboard(unsigned char key, int x, int y)
{
    keysDown.push_back(key);
}

bool GameEngine::IsKeyDown(unsigned char key)
{
    for (int i = 0; i < keysDown.size(); i++)
    {
        if (keysDown[i] == key)
            return true;
    }
    return false;
}

void GameEngine::Add(GameObject* obj)
{
    sceneGraph.push_back(obj);
}

void GameEngine::Destroy(GameObject* obj)
{
    for (int j = 0; j < sceneGraph.size(); j++)
    {
        if (sceneGraph[j] == obj)
        {
            sceneGraph.erase(sceneGraph.begin() + j);
            break;
        }
    }
}

float GameEngine::getDeltaTime()
{
    return min(lastDeltaTime, maxFrameTime) / 1000.0f;
}