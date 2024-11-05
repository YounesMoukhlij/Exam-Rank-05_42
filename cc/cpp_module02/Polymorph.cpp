#include "Polymorph.hpp"

ASpell* Polymorph::clone () const
{
	return new Polymorph();
}

Polymorph::Polymorph() : ASpell("Polymorph", "burnt to a crisp")
{

}

Polymorph::~Polymorph()
{

}