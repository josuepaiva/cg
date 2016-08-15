// Author: Josué

#include <GL/glut.h>

//Function draw
void Draw(void)
{
  //Color background
  glClearColor(0,1,0,1);
  glClear(GL_COLOR_BUFFER_BIT );
  //Sort draw
  glFlush();
}

//main execution
int main(int argc, char **argv)
{

  glutInit(&argc, argv);
  //Buffer simple
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB );
  glutInitWindowPosition(100,100);
  glutInitWindowSize(500,500);
  glutCreateWindow("Teste");
  //call function draw
  glutDisplayFunc(Draw);
  glutMainLoop();

  return 0;
}