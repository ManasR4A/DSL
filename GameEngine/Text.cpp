#include "Text.h"
#include <GL\glew.h>
#include <GL\freeglut.h>

void Text::Draw()
{
	glColor4f(color.r, color.g, color.b, color.a);
	glRasterPos2f(this->x, this->y);
	for (int i = 0; i < text.size(); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
	}
}

bool Text::CheckCollision(GameObject* other)
{
	return false;
}