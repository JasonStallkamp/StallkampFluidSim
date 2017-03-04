#pragma once
#include "grid.h"
#include <GL/glut.h>

class RenderHandler
{
public:
	RenderHandler();
	~RenderHandler();
	void draw();
	Grid* drawingGrid;
	GLuint  textureID;
private:

};

