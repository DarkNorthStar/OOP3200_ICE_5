#pragma once
#ifndef __VECTOR2D__
#define __VECTOR2D__

#include <iostream>
#include <string>

class Vector2D
{
public:
	// constructor
	Vector2D(float x = 0.0f, float y = 0.0f);
	~Vector2D();

	// copy constructor
	Vector2D(const Vector2D& rhs);

	// arithmetic operators
	Vector2D operator+(const Vector2D& rhs) const;
	Vector2D operator-(const Vector2D& rhs) const;
	Vector2D operator*(const Vector2D& rhs) const;
	Vector2D operator*(float scale) const;
	Vector2D operator/(const Vector2D& rhs) const;
	Vector2D operator/(float scale) const;
	Vector2D &operator=(const Vector2D& rhs);

	// shortcut operators
	Vector2D &operator+=(const Vector2D& rhs);
	Vector2D &operator-=(const Vector2D& rhs);
	Vector2D &operator*=(const Vector2D& rhs);
	Vector2D &operator/=(const Vector2D& rhs);

	// comparison operators
	bool operator==(const Vector2D& rhs) const;
	bool operator!=(const Vector2D& rhs) const;
	bool operator>(const Vector2D& rhs) const;
	bool operator<(const Vector2D& rhs) const;
	bool operator>=(const Vector2D& rhs) const;
	bool operator<=(const Vector2D& rhs) const;

	// other operator overloads
	float& operator[](int component);

	// increment / decrement operators
	Vector2D &operator++();
	Vector2D operator++(int);
	Vector2D &operator--();
	Vector2D operator--(int);

	// input/output operator overloads
	friend std::ostream& operator<<(std::ostream& out, const Vector2D& rhs);
	friend std::istream& operator>>(std::istream& in, Vector2D& rhs);

	// overload string cast
	explicit operator std::string() const;

	// Getters and Setters
	float GetX() const;
	float GetY() const;
	void SetX(float x = 0.0f);
	void SetY(float y = 0.0f);
	void Set(float x = 0.0f, float y = 0.0f);

	std::string ToString(int precision = 2) const;

	// utility functions
	float GetMagnitude() const;
	float GetSqrMagnitude() const;
	void SetScale(const Vector2D& scale);
	Vector2D GetNormalized() const;
	void Normalize();

	// static functions
	static Vector2D Zero();
	static Vector2D One();
	static Vector2D Up();
	static Vector2D Down();
	static Vector2D Right();
	static Vector2D Left();
	static Vector2D Lerp(const Vector2D& a, const Vector2D& b, float t);
	static Vector2D LerpUnclamped(const Vector2D& a, const Vector2D& b, float t);
	static Vector2D MoveTowards(const Vector2D& current, const Vector2D& target, float max_distance_delta);
	static Vector2D Scale(const Vector2D& a, const Vector2D& b);
	static Vector2D Reflect(const Vector2D& in_direction, const Vector2D& in_normal);
	static Vector2D Perpendicular(const Vector2D& in_direction);
	static float Dot(const Vector2D& lhs, const Vector2D& rhs);
	static float Angle(const Vector2D& from, const Vector2D& to);
	static float SignedAngle(const Vector2D& from, const Vector2D& to);
	static float Distance(const Vector2D& a, const Vector2D& b);
	static Vector2D ClampMagnitude(const Vector2D& vector, float max_length);
	static float SqrMagnitude(const Vector2D& a);
	static Vector2D Min(const Vector2D& lhs, const Vector2D& rhs);
	static Vector2D Max(const Vector2D& lhs, const Vector2D& rhs);

private:
	float m_x{};
	float m_y{};
};

#endif /* defined (__VECTOR2D__) */

