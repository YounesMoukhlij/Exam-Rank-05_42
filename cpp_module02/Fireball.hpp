
#pragma once

#include "ASpell.hpp"




class Fireball : public ASpell
{
public:
	Fireball();

	~Fireball();
	ASpell* Fireball::clone() const

};

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