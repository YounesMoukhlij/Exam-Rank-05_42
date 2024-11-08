

#pragma once


#include "ASpell.hpp"

class Fwoosh : public ASpell
{
	public:
		Fwoosh();
		 ~Fwoosh();
		 ASpell*  clone () const;


};

#include "Fwoosh.hpp"

class Fwoosh;


Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{

}
		 Fwoosh::~Fwoosh()
		 {

		 }

		 ASpell*  Fwoosh::clone () const
		 {
			return new Fwoosh();
		 }