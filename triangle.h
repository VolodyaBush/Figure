#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include <GL/glut.h>
#include "object.h"
#include "color.h"
#include "point.h"
#include <vector>

class Triangle: public Object
{
public:
   Triangle(vector<Point> _points);
   Triangle(vector<Point> _points, const Color& _color);
   void override Draw();
};

#endif TRIANGLE_H_
