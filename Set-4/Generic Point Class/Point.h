#ifndef POINT_H
#define POINT_H


enum Quadrant {
  Q1=1,
  Q2=2,
  Q3=3,
  Q4=4
};


template<typename T>
class Point {
  T m_x;
  T m_y;
  public:
  Point();
  Point(T,T);
  void distanceFromOrigin();
  Quadrant quadrant();
  void display();
};


template <typename T>
Point<T>::Point():m_x(0),m_y(0)
{
    //ctor
}

template <typename T>
Point<T>::Point(T a, T b):m_x(a),m_y(b)
{

}

template <typename T>
void Point<T>::distanceFromOrigin()
{
    std::cout<<"Distance from Origin is: "<<sqrt((m_x*m_x)+(m_y*m_y))<<std::endl;
}

template <typename T>
Quadrant Point<T>::quadrant()
{
    if(m_x>0 && m_y>0)
    {
        return Q1;
    }
    else if(m_x<0 && m_y>0)
    {
        return Q2;
    }
    else if(m_x<0 && m_y<0)
    {
        return Q3;
    }
    else
    {
        return Q4;
    }

}

template <typename T>
void Point<T>::display()
{
    std::cout<<"The x coordinate is: "<<m_x<<std::endl;
    std::cout<<"The y coordinate is: "<<m_y<<std::endl;
}

#endif // POINT_H
