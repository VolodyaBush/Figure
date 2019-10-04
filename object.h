#ifndef OBJECT_H_
#define OBJECT_H_

#include "color.h"
#include "point.h"
#include <vector>

class Object {
public:
  Object();
  Object(vector<Point> _points, const Color& _color);
  void virtual Draw()=0;

protected:
  vector<Point> points;
  Color color;
};

#endif // OBJECT_H_
