
#pragma once


#include "ATarget.hpp"

class Dummy
{
	public:
		Dummy();
		 ~Dummy();
		 ASpell*  clone () const;


};

Dummy::Dummy() : ATarget("Target Practice Dummy")
{

}
		 Dummy::~Dummy()
		 {

		 }

		 ASpell*  Dummy::clone () const
		 {
			return new Dummy();
		 }