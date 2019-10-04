#include "object.h"

Object::Object(vector<Point> _points): points(_points) , color(0.0, 0.0, 0.0) {}

Object::Object(vector<Point> _points, const Color& _color): point(_points), color(_color) {}
