
#include "Dummy.hpp"



		Dummy::Dummy()
		{

		}
		Dummy::~Dummy()
		{

		}
		ATarget* Dummy::clone() const
		{
			return new Dummy();
		}