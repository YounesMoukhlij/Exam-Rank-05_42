#pragma once 

#include "Fwoosh.hpp"

class Fwoosh
{
	public:
		Fwoosh();
		~Fwoosh();
		ASpell* clone () const;
};


ASpell* Fwoosh::clone () const
{

}

Fwoosh::Fwoosh() : Aspell("Fwoosh", "Fwooshed")
{

}

Fwoosh::~Fwoosh()
{

}



