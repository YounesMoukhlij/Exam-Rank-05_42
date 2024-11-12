
#include "Fireball.hpp"



		Fireball::Fireball() : ASpell("Fireball", "turned into a critter")
		{

		}
		Fireball::~Fireball()
		{

		}
		ASpell* Fireball::clone() const
		{
			return new Fireball();
		}