#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>


void init(){
	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-150,150,-150,150);
}

void draw(){

	glClear(GL_COLOR_BUFFER_BIT);
	
	glBegin(GL_QUADS);
		glColor3d(1,1,0);
		glVertex3i(-100,-100,0);
		glVertex3i(-100,0,0);
		glVertex3i(0,0,0);
		glVertex3i(0,-100,0);
	glEnd();
	
	glLineWidth(3.0f);
	glBegin(GL_TRIANGLES);
		glColor3d(1,0,0);
		glVertex3i(0,0,0);
		glVertex3i(-75,100,0);
		glVertex3i(-100,0,0);
	glEnd();
	
	glBegin(GL_QUADS);
		glColor3d(0,0,1);
		glVertex3i(0,0,0);
		glVertex3i(0,-100,0);
		glVertex3i(100,-100,0);
		glVertex3i(100,0,0);
	glEnd();
	
	glBegin(GL_TRIANGLES);
		glColor3d(1,1,1);
		glVertex3i(-75,100,0);
		glVertex3i(0,100,0);
		glVertex3i(0,0,0);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3d(1,1,1);
		glVertex3i(0,0,0);
		glVertex3i(0,100,0);
		glVertex3i(100,0,0);
	glEnd();


	//Porta
	glBegin(GL_LINES);
		glColor3d(1,0,1);
		glVertex3i(-60,-100,0);
		glVertex3i(-60,-60,0);
		glVertex3i(-60,-60,0);
		glVertex3i(-30,-60,0);
		glVertex3i(-30,-60,0);
		glVertex3i(-30,-100,0);
	glEnd();

	//Janela

	glBegin(GL_QUADS);
		glColor3d(0,1,1);
		glVertex3i(50,-70,0);
		glVertex3i(50,-50,0);
		glVertex3i(75,-50,0);
		glVertex3i(75,-70,0);
	glEnd();
	
	glFlush();
}		

int main(int argc, char **argv){

	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Trabalho 2 CG");
	init();
	glutDisplayFunc(draw);
	glutMainLoop();

	return 0;

}
