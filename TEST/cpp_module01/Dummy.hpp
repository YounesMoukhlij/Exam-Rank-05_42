

#pragma once

#include <iostream>
#include <ASpell.hpp>

class Dummy : public ASpell
{

	public:
		Dummy();
		~Dummy();
		ASpell* clone() const;



};