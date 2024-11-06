#pragma once


#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"


class Dummy : public ATarget
{
	public:
		Dummy();
		~Dummy();
		ATarget* clone () const;



};

ATarget* Dummy::clone () const
{
	return new Dummy();
}


Dummy::Dummy() : ASpell("Dummy", "Dummyed")
{

}

Dummy::~Dummy()
{

}