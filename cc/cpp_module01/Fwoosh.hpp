#pragma once 

#include "Fwoosh.hpp"

class Fwoosh
{
	public:
		Fwoosh();
		~Fwoosh();
		ASpell* clone () const;
};
ASpell* clone () const;

Fwoosh::Fwoosh() : Aspell("Fwoosh", "Fwooshed")
{

}

Fwoosh::~Fwoosh()
{

}



