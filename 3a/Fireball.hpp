
#pragma once


#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"


class Fireball : public ASpell
{
	public:
		Fireball();
		~Fireball();
		ASpell* clone () const;



};


#include "Fireball.hpp"

ASpell* Fireball::clone () const
{
	return new Fireball();
}


Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp")
{

}

Fireball::~Fireball()
{

}