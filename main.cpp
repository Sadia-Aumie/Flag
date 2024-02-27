#include<iostream>
#include<windows.h>
#include<GL/glut.h>
#include<stdlib.h>
#include<math.h>

void display()

{
    glClear(GL_COLOR_BUFFER_BIT);

                                              //rectangle
glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 0.0);  // green
    glVertex2f(10, 8);
    glVertex2f(-20, 8);
    glVertex2f(-20, -5);
    glVertex2f(10, -5);
    glEnd();

glBegin(GL_QUADS);
    glColor3f(0.5, 0.3, 0.1);  // Brown
    glVertex2f(-20, 8);
    glVertex2f(-21, 8);
    glVertex2f(-21, -30);
    glVertex2f(-20, -30);
    glEnd();

glBegin(GL_QUADS);
    glColor3f(0.5, 0.3, 0.1);  // Brown
    glVertex2f(-18,-32);
    glVertex2f(-18,-30);
    glVertex2f(-22, -30);
    glVertex2f(-22, -32);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.3, 0.1);  // Brown
    glVertex2f(-17,-32);
    glVertex2f(-23, -32);
    glVertex2f(-23, -33);
    glVertex2f(-17,-33);

    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.3, 0.1);  // Brown
    glVertex2f(-16,-33);
    glVertex2f(-24, -34);
    glVertex2f(-24, -34);
    glVertex2f(-16,-33);

    glEnd();



glBegin(GL_POLYGON);


{

    glColor3f(1.0, 0.0, 0.0);
    double x= 5;
    double y =4;
    for(int i =0 ; i<=360; i++){
        glVertex2d(x * sin(i)-5 , y* (cos(i))+2);
    }
}
glEnd();

glFlush();


}

void init()
{

    glClearColor(1.0, 1.0, 1.0, 1.0);  // White background
    glOrtho(-50.0, 50.0, -50.0, 50.0, -50.0, 50.0);

}




int main(int a, char **b)
{
    glutInit(&a,b);
    glutInitWindowSize(1500, 1000);
    glutInitWindowPosition(0,0);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutCreateWindow("circle");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
return 0;
}
