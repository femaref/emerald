#include "engine.h"
#include <object.h>
#include <GLUT/glut.h>

void engine_init(int width, int height) {
   glClearColor(0.0, 0.0, 0.2, 0.0);
   glShadeModel(GL_SMOOTH);
   glViewport(0,0,width,height);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   gluPerspective(45.0f,(GLfloat)width/(GLfloat)height,1.0f,1000.0f);
   glEnable(GL_DEPTH_TEST);
   glPolygonMode (GL_FRONT_AND_BACK, GL_FILL);
}

void engine_display(void) {
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glFlush();
  glutSwapBuffers();
}

void engine_resize (int width, int height)
{
   glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
   glViewport(0,0,width,height);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   gluPerspective(45.0f,(GLfloat)width/(GLfloat)height,1.0f,1000.0f);
   glutPostRedisplay ();
}