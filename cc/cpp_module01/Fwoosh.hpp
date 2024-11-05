#pragma once 

#include "Fwoosh.hpp"

class Fwoosh
{
	public:
		Fwoosh();
~Fwoosh();
			Fwoosh* clone () const = 0;
};
