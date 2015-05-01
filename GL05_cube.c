#include <GL/glut.h>


// generic function type:   
//  return_type  glFunction[234][sifd] (type value1, type value2 ...);
//  return_type  glFunction[234][sifd]v (type *value);
//
//  Ldouble aVertex[] = {1.1, 2.2, 3.3};
//  glVertex3fv(aVertex);        // an array of 3 GLfloat values
//
// s (GLshort)
// i (GLint)
// f (GLfloat)
// d (GLdouble)
//
// glutInitWindowPosition(50, 50);
// orign(0,0) is the top-left corner on the screen
// 
// -------------> x
// |
// |
// |
// | 
// y
// callback event handler. An event handler provides the response to a particular event (such as key-press, mouse-click, window-paint). The function display() is meant to be the handler for window-paint event. The OpenGL graphics system calls back display() in response to a window-paint request to re-paint the window (e.g., window first appears, window is restored after minimized, and window is resized). Callback means that the function is invoked by the system, instead of called by the your program.


// OpenGL adopts the Right-Hand Coordinate System (RHS). In the RHS, the x-axis is pointing right, y-axis is pointing up, and z-axis is pointing out of the screen.     

void display () {
 // set the "clearing" (background) color
 glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
 // set the background with the current "clearing" color
 glClear(GL_COLOR_BUFFER_BIT);

 glBegin(GL_QUADS);
// Top-face
   glColor3f(0.0f, 1.0f, 0.0f); // green
   glVertex3f(1.0f, 1.0f, -1.0f);
   glVertex3f(-1.0f, 1.0f, -1.0f);
   glVertex3f(-1.0f, 1.0f, 1.0f);
   glVertex3f(1.0f, 1.0f, 1.0f);
 
   // Bottom-face
   glColor3f(1.0f, 0.5f, 0.0f); // orange
   glVertex3f(1.0f, -1.0f, 1.0f);
   glVertex3f(-1.0f, -1.0f, 1.0f);
   glVertex3f(-1.0f, -1.0f, -1.0f);
   glVertex3f(1.0f, -1.0f, -1.0f);
 
   // Front-face
   glColor3f(1.0f, 0.0f, 0.0f); // red
   glVertex3f(1.0f, 1.0f, 1.0f);
   glVertex3f(-1.0f, 1.0f, 1.0f);
   glVertex3f(-1.0f, -1.0f, 1.0f);
   glVertex3f(1.0f, -1.0f, 1.0f);
 
   // Back-face
   glColor3f(1.0f, 1.0f, 0.0f); // yellow
   glVertex3f(1.0f, -1.0f, -1.0f);
   glVertex3f(-1.0f, -1.0f, -1.0f);
   glVertex3f(-1.0f, 1.0f, -1.0f);
   glVertex3f(1.0f, 1.0f, -1.0f);
 
   // Left-face
   glColor3f(0.0f, 0.0f, 1.0f); // blue
   glVertex3f(-1.0f, 1.0f, 1.0f);
   glVertex3f(-1.0f, 1.0f, -1.0f);
   glVertex3f(-1.0f, -1.0f, -1.0f);
   glVertex3f(-1.0f, -1.0f, 1.0f);
 
   // Right-face
   glColor3f(1.0f, 0.0f, 1.0f); // magenta
   glVertex3f(1.0f, 1.0f, -1.0f);
   glVertex3f(1.0f, 1.0f, 1.0f);
   glVertex3f(1.0f, -1.0f, 1.0f);
   glVertex3f(1.0f, -1.0f, -1.0f);
 glEnd();
 glFlush();
}

int main(int argc, char** argv) {
  glutInit(&argc, argv);
  glutCreateWindow("Experiment with quad drawing" /* title */ );
  glutInitWindowSize(320,320);
  glutInitWindowPosition(50, 50);
  glutDisplayFunc(display);
  glutMainLoop();
  return 0;
}

