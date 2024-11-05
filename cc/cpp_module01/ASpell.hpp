


#pragma once 

#include <iostream>

class ASpell
{
	private:
		std::string _name;
		std::string _effects;
	public:
		~ASpell();
		ASpell(const std::string& name, const std::string& effects);
		ASpell(const ASpell& origine);

		ASpell& operator=(const ASpell& origine);

		const std::string& getName() const;
		const std::string& getEffects() const;
};