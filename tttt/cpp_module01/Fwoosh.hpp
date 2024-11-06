


#pragma once


#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"


class Fwoosh
{
	public:
		Fwoosh();
		~Fwoosh();
		ASpell* clone () const;



};

ASpell* Fwoosh::clone () const


Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{

}

Fwoosh::~Fwoosh()
{

}