#include "Fwoosh.hpp"


Fwoosh::Fwoosh() : ATarget("Target Practice Fwoosh")
{

}
		 Fwoosh::~Fwoosh()
		 {

		 }

		 ASpell*  Fwoosh::clone () const
		 {
			return new Fwoosh();
		 }