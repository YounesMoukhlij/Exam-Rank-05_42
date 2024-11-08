
#pragma once


#include "ASpell.hpp"

class Dummy
{
	public:
		Dummy();
		 ~Dummy();
		 ASpell*  clone () const;


};

Dummy::Dummy() : ATarget("Dummy", "Dummyed")
{

}
		 Dummy::~Dummy()
		 {

		 }

		 ASpell*  Dummy::clone () const
		 {
			return new Dummy();
		 }