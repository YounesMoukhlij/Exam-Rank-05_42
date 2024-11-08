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