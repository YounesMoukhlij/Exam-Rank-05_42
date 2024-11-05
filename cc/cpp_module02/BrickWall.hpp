

#pragma once 

#include "ATarget.hpp"


class ASpell;

class Fwoosh : public ASpell
{
	public:
		Fwoosh();
		~Fwoosh();
		ASpell* clone () const;
};



