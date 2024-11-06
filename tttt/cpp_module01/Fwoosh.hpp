


#pragma once


#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"


class Fwoosh
{
	public:
		Fwoosh();
		~Fwoosh();
		ASpell* clone () const;



};


ATarget::ATarget(const std::string& type) : _type(type)
{

}

ATarget::~ATarget()
{

}