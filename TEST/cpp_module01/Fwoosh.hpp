

#pragma once

#include <iostream>
#include <ASpell.hpp>

class Fwoosh
{

	public:
		Fwoosh();
		~Fwoosh();
		virtual ASpell* clone() = 0;



};


Fwoosh::Fwoosh() : ASpell("Fwoosh", "Fwooshed")
{

}

ASpell Fwoosh::clone() const
{
	return new Fwoosh();
}