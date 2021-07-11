#include "MyArray.h"

template <typename T>
MyArray<T>::MyArray()
{
    T *m_arr = new T[100];
    m_len = 0;
}
template <typename T>
MyArray<T>::MyArray(int len)
{
    T *m_arr = new T[len];
    m_len = 0;
}
template <typename T>
MyArray<T>::~MyArray()
{
    delete[] m_arr;
}
template <typename T>
void MyArray<T>::append(T val)
{
    m_arr[m_len] = val;
    m_len++;
}
template <typename T>
T MyArray<T>::at(int index)
{
    return m_arr[index];
}
template <typename T>
bool MyArray<T>::search(T key) ()
{
   for(int i=0 ; i<m_len; i++)
    {
        if(m_arr[i]==key)
        {
            return true;
        }

    }
    return false;
}
template <typename T>
T MyArray<T>::sum() const
{
    T sum =0;
    for(int i =0; i<m_len; i++)
    {
        sum += m_arr[i];
    }
    return sum;
}
template <typename T>
T MyArray<T>::min() const
{
    T minimum = m_arr[0];
    for(int i=0; i<m_len; i++)
    {
        if(m_arr[i]<minimum)
        {
            minimum = m_arr[i];
        }
    }
    return minimum;
}
template <typename T>
T MyArray<T>::max() const
{
    T maximum = m_arr[0];
    for( int i=0; i<m_len; i++)
    {
        if(m_arr[i]>maximum)
        {
            maximum = m_arr[i];
        }
    }
    return maximum;
}
template <typename T>
void MyArray<T>::reverse()
{
    int j = m_len-1;
    for(int i = 0; i<j; i++,j--)
    {
        T temp = m_arr[j];
        m_arr[i] = m_arr[j];
        m_arr[j] = temp;
     }
}
template <typename T>
void MyArray<T>::sort()
{
    for( int i =0; i<m_len; i++)
    {
        for( int j = i+1; j< m_len; j++)
        {
            if(m_arr[i]>m_arr[j])
            {
                T temp = m_arr[i];
                m_arr[i] = m_arr[j];
                m_arr[j] = temp;
            }
        }
    }
}
