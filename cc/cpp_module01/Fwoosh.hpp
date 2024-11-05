#pragma once 

#include "Fwoosh.hpp"

class Fwoosh
{
		std::string _name;
		std::string _effects;
	public:
		Fwoosh(const std::string& name, const std::string& effects);

		 	~Fwoosh();
			Fwoosh* clone () const = 0;
};
