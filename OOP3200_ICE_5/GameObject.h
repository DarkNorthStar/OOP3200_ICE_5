#pragma once
#ifndef __GAME_OBJECT__
#define __GAME_OBJECT__

#include "Vector2D.h"

class GameObject
{
public:
	// Constructors
	GameObject();
	GameObject(int id, float x, float y);
	GameObject(int id, const Vector2D& position);

	// Rule of Three
	~GameObject(); // Destructor
	GameObject(const GameObject& other_object); // Copy Constructor
	GameObject& operator=(const GameObject& other_object); // Assignment Operator

	// Accessors
	Vector2D GetPosition() const;
	int GetID() const;
	
	// Mutators
	void SetPosition(float x, float y);
	void SetPosition(const Vector2D& new_position);
	void SetID(int id);

	// Utility Functions
	std::string ToString() const;
	
private:
	int m_id;
	Vector2D m_position;
};

#endif /* defined (__GAME_OBJECT__) */

