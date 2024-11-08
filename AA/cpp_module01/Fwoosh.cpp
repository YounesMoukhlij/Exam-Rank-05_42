#include "Fwoosh.hpp"

class Fwoosh;


Fwoosh::Fwoosh() : ASpell("Target Practice Fwoosh")
{

}
		 Fwoosh::~Fwoosh()
		 {

		 }

		 ASpell*  Fwoosh::clone () const
		 {
			return new Fwoosh();
		 }