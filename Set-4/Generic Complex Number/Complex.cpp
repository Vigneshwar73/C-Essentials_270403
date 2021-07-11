#include "Complex.h"

template <typename T>
Complex<T>::Complex():m_real(0),m_image(0)
{
    //ctor
}

template <typename T>
Complex<T>::Complex(T a, T b):m_real(a),m_image(b)
{

}

template <typename T>
void Complex<T>::display()
{
    std::cout<<"Real part: "<<m_real<<std::endl;
    std::cout<<"Imaginary Part"<<m_image<<std::endl;
}
