#pragma once 

#include "ASpell.h"

class ASpell
{
	protected:
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
