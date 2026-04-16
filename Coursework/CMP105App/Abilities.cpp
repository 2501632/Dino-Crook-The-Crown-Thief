#include "Abilities.h"

Abilities::Abilities()
{

}

void Abilities::Fireball(float dt, sf::Vector2f playerPos)
{
	std::cout << "fireball";
	fireball.setRadius(10.f);
	fireball.setFillColor(sf::Color::Red);
	if (!flipped.getFlipped())
	{
		fireball.setPosition({ playerPos.x + 10.f, playerPos.y / 2.f });
		fireball.move({ fireballMoveSpeed * dt, 0.f });
	}
	else if (flipped.getFlipped())
	{
		fireball.setPosition({ playerPos.x - 10.f, playerPos.y / 2.f });
		fireball.move({ -fireballMoveSpeed * dt, 0.f });
	}
}

sf::CircleShape Abilities::getFireball()
{
	return fireball;
}
