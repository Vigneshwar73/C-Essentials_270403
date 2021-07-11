#ifndef RECTANGLE_H
#define RECTANGLE_H
#include"Polygon.h"


class Rectangle : public Polygon
 {
  int  m_length;
  int  m_breadth;

public:
  Rectangle(int l,int b);
  double area();
  double circumference();
};

#endif // RECTANGLE_H
