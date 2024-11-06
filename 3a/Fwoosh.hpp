


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

