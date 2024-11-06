

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


#include "Polymorph.hpp"

ASpell* Polymorph::clone () const
{
	return new Polymorph();
}


Polymorph::Polymorph() : ASpell("Polymorph", "burnt to a crisp")
{

}

Polymorph::~Polymorph()
{

}