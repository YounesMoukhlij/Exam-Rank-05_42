

#pragma once


#include "ASpell.hpp"

class ASpell
{
	public:
		ASpell();
		 ~ASpell();
		virtual ASpell*  clone () const = 0;


};