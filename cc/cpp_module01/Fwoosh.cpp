
#include "Fwoosh.hpp"

ASpell* Fwoosh::clone () const
{
	return new Fwoosh();
}

Fwoosh::Fwoosh() : ASpell("Fwoosh", "Fwooshed")
{

}

Fwoosh::~Fwoosh()
{

}
