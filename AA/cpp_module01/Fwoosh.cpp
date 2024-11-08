#include "Dummy.hpp"


Fwoosh::Fwoosh() : ATarget("Target Practice Fwoosh")
{

}
		 Fwoosh::~Fwoosh()
		 {

		 }

		 ATarget*  Fwoosh::clone () const
		 {
			return new Fwoosh();
		 }