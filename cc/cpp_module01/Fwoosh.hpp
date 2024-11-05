#pragma once 

#include "ASpell.hpp"

class ASpell
{
		std::string _name;
		std::string _effects;
	public:
		ASpell(const std::string& name, const std::string& effects);
		ASpell(const ASpell& origine);

		ASpell& operator=(const ASpell& origine);

		const std::string& getName() const;
		const std::string& getEffects() const;

		virtual ~ASpell();
		virtual	ASpell* clone () const = 0;
};
