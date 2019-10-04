#ifndef SQUARE_H_
#define SQUARE_H_

#include <GL/glut.h>
#include "object.h"
#include "color.h"
#include "point.h"
#include <vector>

class Square: public Object
{
public:
   Square(vector<Point> _points);
   Square(vector<Point> _points, const Color& _color);
   void override Draw();
};

#endif SQUARE_H_
