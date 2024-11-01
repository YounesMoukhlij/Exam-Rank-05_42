

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

Fwoosh Fwoosh::clone() const
{
	return new
}