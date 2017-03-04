#include "../headers/renderHandler.h"
RenderHandler::RenderHandler()
{
	drawingGrid = new Grid();
	glGenTextures(1, &textureID);


	*(*drawingGrid)[8][8][0] = 0;
	*(*drawingGrid)[8][8][2] = 1;
	*drawingGrid[0][8][8][1] = 1;
}

RenderHandler::~RenderHandler()
{
	delete drawingGrid;
}

void RenderHandler::draw()
{
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, textureID);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, 64, 64,0, GL_RGB, GL_FLOAT, drawingGrid->data);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, textureID);
	glBegin(GL_QUADS);
	glTexCoord2d(0.0, 0.0);		glVertex2d(-1, -1);
	glTexCoord2d(1.0, 0.0); 	glVertex2d( 1, -1);
	glTexCoord2d(1.0, 1.0); 	glVertex2d( 1,  1);
	glTexCoord2d(0.0, 1.0); 	glVertex2d(-1,  1);
	glEnd();
	glDisable(GL_TEXTURE_2D);
}