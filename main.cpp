#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, .0);

  glBegin(GL_QUADS); //Begin triangle coordinates

  //Triangle
    glVertex3f(0.05f, 0.05f, 0.0f);
    glVertex3f(0.25f, 0.05f, 0.0f);
    glVertex3f(0.25f, 0.35f, 0.0f);
    glVertex3f(0.05f, 0.35f, 0.0f);

    glColor3f (101.0, 94.0, 94.0);
    glVertex3f(0.05f, 0.20f, 0.0f);
    glVertex3f(0.25f, 0.20f, 0.0f);
    glVertex3f(0.25f, 0.21f, 0.0f);
    glVertex3f(0.05f, 0.21f, 0.0f);

    glColor3f (128.0, 128.0, 128.0);
    glVertex3f(0.02f, 0.35f, 0.0f);
    glVertex3f(0.28f, 0.35f, 0.0f);
    glVertex3f(0.25f, 0.38f, 0.0f);
    glVertex3f(0.05f, 0.38f, 0.0f);

    glColor3f (128.0, 128.0, 128.0);
    glVertex3f(0.05f, 0.20, 0.0f);
    glVertex3f(0.03f, 0.20f, 0.0f);
    glVertex3f(0.03f, 0.21f, 0.0f);
    glVertex3f(0.05f, 0.22f, 0.0f);

//window1
    glVertex3f(0.06f, 0.27, 0.0f);
    glVertex3f(0.06f, 0.33f, 0.0f);
    glVertex3f(0.10f, 0.33f, 0.0f);
    glVertex3f(0.10f, 0.27f, 0.0f);
//sub window1
    glColor3f (0.0, 0.0, 0.0);
    glVertex3f(0.06, 0.27, 0.0f);
    glVertex3f(0.07f, 0.28f, 0.0f);
    glVertex3f(0.07f, 0.31f, 0.0f);
    glVertex3f(0.06f, 0.33f, 0.0f);
//sub window2
    glColor3f (0.0, 0.0, 0.0);
    glVertex3f(0.10, 0.27, 0.0f);
    glVertex3f(0.09f, 0.28f, 0.0f);
    glVertex3f(0.09f, 0.31f, 0.0f);
    glVertex3f(0.10f, 0.33f, 0.0f);
// windows 2
    glColor3f (101.0, 94.0, 94.0);
    glVertex3f(0.20, 0.27, 0.0f);
    glVertex3f(0.24f, 0.27f, 0.0f);
    glVertex3f(0.24f, 0.33f, 0.0f);
    glVertex3f(0.20f, 0.33f, 0.0f);
//sub window1
    glColor3f (0.0, 0.0, 0.0);
    glVertex3f(0.20, 0.27, 0.0f);
    glVertex3f(0.21f, 0.28f, 0.0f);
    glVertex3f(0.21f, 0.31f, 0.0f);
    glVertex3f(0.20f, 0.33f, 0.0f);
//sub window2
    glColor3f (0.0, 0.0, 0.0);
    glVertex3f(0.24, 0.27, 0.0f);
    glVertex3f(0.23f, 0.28f, 0.0f);
    glVertex3f(0.23f, 0.31f, 0.0f);
    glVertex3f(0.24f, 0.33f, 0.0f);
//dor gate
   glColor3f(1.0,1.0,1.0);
   glVertex3f(0.06,0.06,0.0);
   glVertex3f(0.12,0.06,0.0);
   glVertex3f(0.12,0.19,0.0);
   glVertex3f(0.06,0.19,0.0);
// dor border
   glColor3f(0.0,0.0,0.0);
   glVertex3f(0.06,0.06,0.0);
   glVertex3f(0.07,0.06,0.0);
   glVertex3f(0.07,0.19,0.0);
   glVertex3f(0.06,0.19,0.0);

   // dor
   glColor3f(0.0,0.0,0.0);
   glVertex3f(0.06,0.055,0.0);
   glVertex3f(0.10,0.09,0.0);
   glVertex3f(0.10,0.18,0.0);
   glVertex3f(0.07,0.19,0.0);
//under
   glColor3f(0.0,1.0,1.0);
   glVertex3f(0.04,0.04,0.0);
   glVertex3f(0.26,0.04,0.0);
   glVertex3f(0.26,0.06,0.0);
   glVertex3f(0.04,0.06,0.0);

   //boundary
   glColor3f(1.0,0.0,1.0);
   glVertex3f(0.12,0.10,0.0);
   glVertex3f(0.25,0.10,0.0);
   glVertex3f(0.25,0.11,0.0);
   glVertex3f(0.12,0.11,0.0);

   glColor3f(1.0,0.0,1.0);
   glVertex3f(0.12,0.06,0.0);
   glVertex3f(0.12,0.10,0.0);
   glVertex3f(0.13,0.10,0.0);
   glVertex3f(0.13,0.06,0.0);

   glColor3f(1.0,0.0,1.0);
   glVertex3f(0.16,0.06,0.0);
   glVertex3f(0.17,0.06,0.0);
   glVertex3f(0.17,0.10,0.0);
   glVertex3f(0.16,0.10,0.0);

   glColor3f(1.0,0.0,1.0);
   glVertex3f(0.19,0.06,0.0);
   glVertex3f(0.20,0.06,0.0);
   glVertex3f(0.20,0.10,0.0);
   glVertex3f(0.19,0.10,0.0);

   glColor3f(1.0,0.0,1.0);
   glVertex3f(0.22,0.06,0.0);
   glVertex3f(0.23,0.06,0.0);
   glVertex3f(0.23,0.10,0.0);
   glVertex3f(0.22,0.10,0.0);

   //windows G floor
   glColor3f(1.0,1.0,1.0);
   glVertex3f(0.18,0.14,0.0);
   glVertex3f(0.23,0.14,0.0);
   glVertex3f(0.23,0.18,0.0);
   glVertex3f(0.18,0.18,0.0);


  glEnd();//End triangle coordinates

glBegin(GL_TRIANGLES);
//2nd floor design 1
    glColor3f (1.0, 1.0, 0.0);
    glVertex3f(0.05f, 0.21, 0.0f);
    glVertex3f(0.25f, 0.21f, 0.0f);
    glVertex3f(0.15f, 0.25f, 0.0f);

    //2nd floor design 2
    glColor3f (0.0, 0.0, 0.0);
    glVertex3f(0.12f, 0.23, 0.0f);
    glVertex3f(0.18f, 0.23f, 0.0f);
    glVertex3f(0.15f, 0.24f, 0.0f);


glEnd();



glFlush ();
}
void init (void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0); //select clearing (background) color
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -10.0, 10.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 600);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("hello");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
