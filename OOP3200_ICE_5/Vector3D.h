/*
 * Name: Tyler Osborne
 * Date: 2021-10-16
 * Description:
 *	This IS the header file for the vector 3D class
 */

#pragma once

#ifndef __VECTOR3D__
#define __VECTOR3D__
#include <string>

template <class T>
class Vector3D
{
public:

	Vector3D(T x = static_cast<T>(0.0), T y = static_cast<T>(0.0), T z = static_cast<T>(0.0));
	~Vector3D();

	//Accessors
	T GetX() const;
	T GetY() const;
	T GetZ() const;
	//Mutators
	void SetX(const T x);
	void SetY(const T y);
	void SetZ(const T z);
	void Set(const T x, const T y, const T z);
	
	std::string ToString() const;


private:
	T m_x;
	T m_y;
	T m_z;
};

#endif /* defined (__VECTOR3D__)*/
