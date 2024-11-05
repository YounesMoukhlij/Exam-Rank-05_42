


#include "Fireball.hpp"

ASpell* Fireball::clone () const
{
	return new Fireball();
}

Fireball::Fireball() : ASpell("Fireball", "Fireballed")
{

}

Fireball::~Fireball()
{

}
