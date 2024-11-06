


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


Fwoosh::Fwoosh(const std::string& type) : _type(type)
{

}

Fwoosh::~Fwoosh()
{

}