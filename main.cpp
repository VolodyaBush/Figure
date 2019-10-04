#include <iostream>
#include <vector>
#include <GL/glut.h>

#include "object.h"
#include "triangle.h"
#include "square.h"
#include "color.h"
#include "point.h"


std::vector<Object*> vect;

void DrawFigure() {
 std::cout << "DrawFigure" << std::endl;
 glClearColor(1.0,1.0,1.0,0.0);
 glClear(GL_COLOR_BUFFER_BIT);
 for(auto item : vect){
  item->Draw();
 }
 glutSwapBuffers();
}


int main(int argc, char** argv) {

  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_RGBA|GLUT_DOUBLE);
  glutInitWindowSize(680,420);
  glutInitWindowPosition(300,100);
  glutCreateWindow("Figure");

  vector<Point> trianglePoints;
  trianglePoints.push_back(Point(-0.5,-0.5,0.0));
  trianglePoints.push_back(Point(0.5,-0.5,0.0));
  trianglePoints.push_back(Point(0.0,0.5,0.0));

  vect.push_back(new Triangle(trianglePoints,Color(1.0,0.0,0.0)));

  glutDisplayFunc(DrawFigure);
  glutMainLoop();

  return 0;
}
