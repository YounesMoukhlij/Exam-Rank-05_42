#pragma once 

#include "Fwoosh.hpp"

class Fwoosh
{
		std::string _name;
		std::string _effects;
	public:
		Fwoosh(const std::string& name, const std::string& effects);
		Fwoosh(const Fwoosh& origine);

		Fwoosh& operator=(const Fwoosh& origine);

		const std::string& getName() const;
		const std::string& getEffects() const;

		 ~Fwoosh();
			Fwoosh* clone () const = 0;
};
