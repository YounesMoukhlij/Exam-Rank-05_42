

#include <iostream>

#include "ASpell.hpp"

class Fwoosh : public ASpell
{
	Fwoosh();
	~Fwoosh();

	ASpell* clone ();
};

Fwoosh::Fwoosh(), _name("Fwoosh"), _effects("fwooshed")
{

}

Fwoosh::~Fwoosh()
{



}


ASpell* Fwoosh::clone()
{
	return new(Fwoosh);
}