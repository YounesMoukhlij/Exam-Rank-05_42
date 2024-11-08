#include "Fwoosh.hpp"




Polymorph::Polymorph() : ASpell("Polymorph", "Polymorphed")
{

}
		 Polymorph::~Polymorph()
		 {

		 }

		 ASpell*  Polymorph::clone () const
		 {
			return new Polymorph();
		 }