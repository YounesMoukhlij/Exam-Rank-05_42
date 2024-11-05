#pragma once 

#include "ATarget.hpp"

class Fwoosh : public ATa
{
	public:
		Fwoosh();
		~Fwoosh();
		ASpell* clone () const;
};


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
