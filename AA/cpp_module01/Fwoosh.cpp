#include "Fwoosh.hpp"

class Fwoosh;


Fwoosh::Fwoosh() : ASpell("Fwoosh", "Fwoosh")
{

}
		 Fwoosh::~Fwoosh()
		 {

		 }

		 ASpell*  Fwoosh::clone () const
		 {
			return new Fwoosh();
		 }