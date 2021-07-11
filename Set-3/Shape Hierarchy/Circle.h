#ifndef CIRCLE_H
#define CIRCLE_H
#include"IShape.h"

class Circle : public IShape
 {
  double m_radius;

public:
  const static double PI = 22.0/7.0;
  Circle(int);
  double area();
  double circumference();
};

#endif // CIRCLE_H
