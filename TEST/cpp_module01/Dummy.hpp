

#pragma once

#include <iostream>
#include "ASpell.hpp"

class Dummy : public A
{

	public:
		Dummy();
		~Dummy();
		ASpell* clone() const;



};