

#pragma once


#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"


class Polymorph : public ASpell
{
	public:
		Polymorph();
		~Polymorph();
		ASpell* clone () const;



};


