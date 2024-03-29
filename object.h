#ifndef OBJECT_H_
#define OBJECT_H_

#include "color.h"
#include "point.h"
#include <vector>

class Object {
public:
  Object(std::vector<Point> point);
  explicit Object(Object* parent = NULL);
  Object(std::vector<Point> _points, const Color& _color);
  virtual void Draw()=0;
  virtual void addChild(Object* child);

protected:
  std::vector<Point> points;
  Color color;
private:
  const Object* parent;
  std::vector<Object*> childs;
};

#endif // OBJECT_H_
