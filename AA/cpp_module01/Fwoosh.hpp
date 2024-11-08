

#pragma once


#include "ASpell.hpp"

class Fwoosh
{
	public:
		Fwoosh();
		 ~Fwoosh();
		 ASpell*  clone () const;


};

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