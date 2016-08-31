// Author: Josué
#include <iostream>
#include <GL/glut.h>
#include <cmath>

void printaPonto(int x, int y){
  
  glBegin(GL_POINTS);
   glColor3f(0.0f, 0.0f, 0.0f);
   glVertex2i(x,y);
  glEnd();

}

void dda_raster(int x0, int y0, int x1, int y1){
  
  int x = x0;
  int y = y0;

  int dx = abs(x1 - x0);
  int dy = abs(y1 - y0);
  int increX = 0;
  int increY = 0;
  int passos = 0;

  if(dx < dy){
	passos = dx;
  }else{
        passos = dy;
  }
  
  increX += passos;
  increY += passos;

  printaPonto(x,y);

  for(unsigned int i = 0; i <= passos; i++){
     x += increX;
     y += increY;
     
  printaPonto(x,y);

  }


}

void draw(){

  glClearColor(0,0,0,1);
  glClear(GL_COLOR_BUFFER_BIT);
  glFlush();
  //dda_raster(2,3,6,4);
  
  printaPonto(100,50);
  printaPonto(100,130);
  printaPonto(150,130);
}

#include <stdlib.h>

void init(void) 
{
   /* select clearing colors */
   glClearColor (0.0, 0.0, 0.0, 0.0);
}

void display(void)
{
   /* clear all pixels */
   glClear (GL_COLOR_BUFFER_BIT);

   printaPonto(100,50);
  printaPonto(100,130);
  printaPonto(150,130);
   glFlush ();
}

void reshape (int w, int h)
{
   /* set the viewpor dimensions */
   glViewport (0, 0, (GLsizei) w, (GLsizei) h); 
   /* set the viewing parameters */
   glMatrixMode (GL_PROJECTION);
   /* clear the projection stack matrix */
   glLoadIdentity ();
   glFrustum (-1.5, 1.5, -1.5, 1.5, 1.5, 20.0);
   /* restore the modeling matrix mode */
   glMatrixMode (GL_MODELVIEW);
}

/* ARGSUSED1 */
void keyboard(unsigned char key, int x, int y)
{
   switch (key) {
      case 27:
         exit(0);
         break;
   }
}

int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
   glutInitWindowSize (350, 350); 
   glutInitWindowPosition (100, 100);
   glutCreateWindow (argv[0]);
   init ();
   glutDisplayFunc(display); 
   glutReshapeFunc(reshape);
   glutKeyboardFunc(keyboard);
   glutMainLoop();
   return 0;
}
