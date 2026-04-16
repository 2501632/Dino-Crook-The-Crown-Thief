#pragma once
#include "Framework/GameObject.h"
#include "Framework/Animation.h"
#include <iostream>
class Abilities
{
protected:
	sf::CircleShape fireball;
	Animation flipped;

	float fireballMoveSpeed = 2.f;

public:
	Abilities();

	void Fireball(float dt, sf::Vector2f playerPos);
	sf::CircleShape getFireball();
};

