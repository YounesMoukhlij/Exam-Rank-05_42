#pragma once 

#include "ATarget.hpp"

class Dummy : public ATarget
{
	public:
		Dummy();
		~Dummy();
		ASpell* clone () const;
};


ASpell* Dummy::clone () const
{
	return new Dummy();
}

Dummy::Dummy() : ATarget("Target Practice Dummy")
{

}

Dummy::~Dummy()
{

}
