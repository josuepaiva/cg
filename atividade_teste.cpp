#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>

void draw(){
	
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(0.0f, 0.0f, 0.0f);
	
	glBegin(GL_POLYGON);
		glVertex2f(1.0f, 2.0f);
		glVertex2f(1.0f, 2.0f);
		glVertex2f(2.0f, 2.0f);
		glVertex2f(2.0f, 2.0f);
	glEnd();

	glFlush();
}

int main(int argc, char **argv){
	
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE || GLUT_RGB);
	glutInitWindowSize(500,350);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Teste poligono");
	glutDisplayFunc(draw);
	glutMainLoop();

	return 0;
	
}
