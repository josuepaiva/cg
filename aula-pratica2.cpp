#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>

float rotate = 0;
float x = 0, y = 0, z = 0;


void init(){

	glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        gluOrtho2D(-150,150, -150, 150);
}

void display(){
	
	glClear(GL_COLOR_BUFFER_BIT);	
	//glScale()
	glBegin(GL_QUADS);
	 glColor3d(1,1,1);
	 glVertex3i(-150,-150,0);
    	 glVertex3i(-150,0,0);
	 glVertex3i(0,0,0);
	 glVertex3i(0,-150,0);	
 	glEnd();

	
	glBegin(GL_QUADS);
	 glColor3d(1,1,1);
	 glVertex3i(0,0,0);
	 glVertex3i(0,150,0);
	 glVertex3i(150,150,0);
	 glVertex3i(150,0,0);
	glEnd();

	glPushMatrix();
	//glRotated(rotate,0,0,1);
	glTranslated(x,y,z);
	glBegin(GL_TRIANGLES);
	 glColor3d(1,0,0);
	 glVertex3d(-50, -50, 1);
	 glColor3d(0,1,0);
	 glVertex3d(50,-50, 1);
	 glColor3d(0,0,1);
	 glVertex3d(0,50, 1);
 	glEnd();

	glPopMatrix();

	glFlush();

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

void keyspecials(int tecla, int x, int y){
	
	switch(tecla){
		 case GLUT_KEY_UP:
                        y+= 2;
                std::cout<<"Tecla cima presionada"<<std::endl;
                        break;
                case GLUT_KEY_LEFT:
		std::cout<<"Tecla esquerda presionada"<<std::endl;
                        x+= 2;
                        break;
		default:
			break;
	}
}
int main(int argc, char** argv){

	glutInit(&argc, argv);
   	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
   	glutInitWindowSize (500, 500); 
   	glutInitWindowPosition (100, 100);
   	glutCreateWindow ("Aula-Pratica 2");
	glutKeyboardFunc(keyboard);
	glutSpecialFunc(keyspecials);
	init();
   	glutDisplayFunc(display); 
   	glutMainLoop();


	return 0;
}
