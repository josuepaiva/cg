#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>

float rotate = 0;
float x = 0, y = 0, z = 0;

void display(){
	
	glClear(GL_COLOR_BUFFER_BIT);
	glRotated(1,0,0,rotate);0	
	glTranslated(0,-0.2,0);
	//glScale()
	glBegin(GL_TRIANGLES);
	 glColor3d(1,1,0.5);
	 glVertex3d(-1,0,0);
    	 glVertex3d(1,0,0);
	 glVertex3d(0,1,0);
         
         /*glVertex3d(-1,0,0);
	 glVertex3d(1,0,0);
	 glVertex3d(0,-1,0);*/
	
 	glEnd();

	glFlush();

}

void keyboard(unsigned char key, int a, int b){
	
	switch(key){
		case 'a':
			glutPostRedisplay();
			break;
		case 'c':
			rotate+= 10;
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
		case 'f':
			glutFullScreen();
			break;		
	}

	glutPostRedisplay();
}

void keyspecials(int tecla, int x, int y){
	
	switch(tecla){
		 case GLUT_KEY_UP:
                        y+= 0.2;
                std::cout<<"Tecla cima presionada"<<std::endl;
                        break;
                case GLUT_KEY_LEFT:
		std::cout<<"Tecla esquerda presionada"<<std::endl;
                        x+= 0.1;
                        break;
	}
}
int main(int argc, char** argv){

	glutInit(&argc, argv);
   	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
   	glutInitWindowSize (500, 300); 
   	glutInitWindowPosition (100, 100);
   	glutCreateWindow ("Aula-Pratica 2");
	glutKeyboardFunc(keyboard);
	glutSpecialFunc(keyspecials);
   	glutDisplayFunc(display); 
   	glutMainLoop();


	return 0;
}
