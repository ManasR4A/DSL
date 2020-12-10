#pragma once

#include <GL\glew.h>
#include <GL\freeglut.h>
#include "GameObject.h"

#include <vector>
#include <chrono>
#include <functional>
using namespace std;

#include "antlr4-runtime.h"
using namespace antlrcpp;

class GameEngine
{
public:
	typedef function<void()> StartCallback;
	typedef function<void(float)> UpdateCallback;

	static GameEngine* instance;

	GameEngine();

	void Run(StartCallback startCallback, UpdateCallback updateCallback);

	void Add(GameObject* obj);
	void Destroy(GameObject* obj);

	void Display();
	void Idle();
	void Reshape(int w, int h);
	void Keyboard(unsigned char key, int x, int y);

	float getDeltaTime();

	bool IsKeyDown(unsigned char key);

private:
	vector<GameObject*> sceneGraph;
	chrono::time_point<chrono::high_resolution_clock> lastFrameTime = chrono::high_resolution_clock::now();
	int lastDeltaTime = 0;
	int targetMillis = 33;
	int maxFrameTime = 333;
	vector<Any> parameters;

	vector<unsigned char> keysDown;

	StartCallback startCallback;
	UpdateCallback updateCallback;
};

