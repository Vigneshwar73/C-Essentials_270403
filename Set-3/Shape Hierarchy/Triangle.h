#ifndef TRIANGLE_H
#define TRIANGLE_H
#include"Polygon.h"

class Triangle : public Polygon
{
  int  m_a;
  int  m_b;
  int  m_c;

public:
  Triangle(int x,int y,int z);
  double area() ;
  double circumference();
};

#endif // TRIANGLE_H
