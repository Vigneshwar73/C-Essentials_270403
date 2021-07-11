#ifndef POLYGON_H
#define POLYGON_H
#include"IShape.h"

class Polygon:public IShape
{
  int m_sides;
  public:
  Polygon(int);   //no.of sides
};
#endif // POLYGON_H
