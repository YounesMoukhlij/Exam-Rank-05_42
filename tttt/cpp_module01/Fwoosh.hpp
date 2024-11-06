


#pragma once


#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"


class Fwoosh : public ASpell
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


Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{

}

Fwoosh::~Fwoosh()
{

}