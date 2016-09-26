#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>

float rotate = 0;
float x = 0, y = 0, z = 0;


void init(){
	glClearColor(0.0,0.0,0.0,0.0);
	glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-100,100,-100,100,0,100);
}

void keyboard(unsigned char key, int a, int b){
	
	switch(key){
		case 'a':
			glutPostRedisplay();
			break;
		case 'c':
			rotate+= 10;
			glutPostRedisplay();
			std::cout<<"rotate"<<std::endl;
			break;
		case 'r':
			glClearColor(1.0,0.0,0.0,1.0);	
			break;
		case 'g':
			glClearColor(0.0,1.0,0.0,1.0);
			break;
		case 'b':
			glClearColor(0.0,0.0,1.0,1.0);
			break;
		default:
			break;		
	}

	glutPostRedisplay();
}

void display(){
	
	glClear(GL_COLOR_BUFFER_BIT);	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	 glTranslated(0,0,-20);
	 glRotated(rotate,1,0,0);
	 glRotated(30,0,1,0);
	

	// glBegin(GL_LINES);
	// 	glColor3d(1,0,0);

	// 	glVertex3d(-10,0,0);
	// 	glVertex3d(50,0,0);

	// 	glColor3d(0,1,0);

	// 	glVertex3d(0,-10,0);
	// 	glVertex3d(0,50,0);

	// 	glColor3d(0,0,1);

	// 	glVertex3d(0,0,-10);
	// 	glVertex3d(0,0,50);

	// glEnd();
	// glColor3d(1,1,1);
	// glutWireTeapot(40);
	glColor3d(255,255,0);
	glutWireSphere (20.0, 30, 20);
	glFlush();

}

int main(int argc, char** argv){

	glutInit(&argc, argv);
   	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
   	glutInitWindowSize (500, 500); 
   	glutInitWindowPosition (100, 100);
   	glutCreateWindow ("Aula-Pratica transformacoes geometricas 3d");
	init();
	glutKeyboardFunc(keyboard);
   	glutDisplayFunc(display); 
   	glutMainLoop();


	return 0;
}