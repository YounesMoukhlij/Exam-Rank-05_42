

#pragma once

#include <iostream>
#include <ASpell.hpp>

class Fwoosh
{

	public:
		Fwoosh();
		~Fwoosh();
		virtual ATarget* clone() = 0;



};


Fwoosh::Fwoosh() : ASpell("Fwoosh", "Fwooshed")
{

}

