

#pragma once

#include <iostream>
#include <ASpell.hpp>

class Fwoosh
{

	public:
		Fwoosh();
		~Fwoosh();
		ASpell* clone() const;



};


Fwoosh::Fwoosh() : ASpell("Fwoosh", "Fwooshed")
{

}

ASpell* Fwoosh::clone() const
{
	return new Fwoosh();
}