

#include <iostream>

#include "ATarget.hpp"

class Dummy : public ATarget
{
		Dummy();
	~Dummy();

	ATarget* clone ();
};