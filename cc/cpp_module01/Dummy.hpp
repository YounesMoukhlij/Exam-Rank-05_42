#pragma once 

#include "ATarget.hpp"

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

Dummy::Dummy() : ATarget("Target Practice Dummy")
{

}

Dummy::~Dummy()
{

}
