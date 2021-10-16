/*
 * Name: Tyler Osborne
 * Date: 2021-10-16
 * Description:
 *	This the vector 3D class
 */

#include "Vector3D.h"

template <class T>
Vector3D<T>::Vector3D(const T x, const T y, const T z): m_x(x), m_y(y), m_z(z)
{
}
template <class T>
Vector3D<T>::~Vector3D()
{
	
}
template <class T>
T Vector3D<T>::GetX() const
{
	return m_x;
}
template <class T>
T Vector3D<T>::GetY() const
{
	return m_y;
}
template <class T>
T Vector3D<T>::GetZ() const
{
	return m_z;
}
template <class T>
void Vector3D<T>::SetX(const T x)
{
	m_x = x;
}
template <class T>
void Vector3D<T>::SetY(const T y)
{
	m_y = y;
}
template <class T>
void Vector3D<T>::SetZ(const T z)
{
	m_z = z;
}
template <class T>
void Vector3D<T>::Set(const T x, const T y, const T z)
{
	m_x = x;
	m_y = y;
	m_z = z;
}
template <class T>
std::string Vector3D<T>::ToString() const
{
	return "(" + std::to_string(m_x) + "," + std::to_string(m_y) + "," + std::to_string(m_z) + ")\n";
}
