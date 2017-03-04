#include <GL/glut.h>
#include "headers/grid.h"
#include "headers/renderHandler.h"
void draw(void)
{
	RenderHandler handler = RenderHandler();
	glClearColor(0,0,0, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	handler.draw();
	glutSwapBuffers();
	//glFlush();
}


int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(256, 256);
	glutCreateWindow("green window");
	glutDisplayFunc(draw);
	glutMainLoop();
	return 0;
}