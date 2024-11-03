
#include "Fireball.hpp"


Fireball::Fireball(/* args */) : ASpell("Fireball", "burnt to a crisp")
{
}

Fireball::~Fireball()
{
}

ASpell* Fireball::clone() const
{
	return new Fireball();
}