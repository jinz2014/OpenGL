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
int cnt = 0;

void display () {

  // test shows the function is called when the window first appears or when I move or resize the window 
 printf("%d call display\n", cnt++);

 // set the "clearing" (background) color
 glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
 // set the background with the current "clearing" color
 glClear(GL_COLOR_BUFFER_BIT);

 glBegin(GL_QUADS);
 // set the foreground color of the pixel 
 // glColor3f(red, green, blue)
 // Take note that in OpenGL, color (and many properties) is applied to
 // vertices rather than primitive shapes. The color of the a primitive shape
 // is interpolated from its vertices.
   glColor3f(0.5f,0.0f,1.0f);
   glVertex2f(-0.5f, -0.5f);

   glColor3f(1.0f,0.0f,0.0f);
   glVertex2f(0.5f, -0.5f);

   glColor3f(0.0f,1.0f,0.0f);
   glVertex2f(0.5f, 0.5f);

   glColor3f(1.0f,1.0f,0.0f);
   glVertex2f(-0.5f, 0.5f);
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

