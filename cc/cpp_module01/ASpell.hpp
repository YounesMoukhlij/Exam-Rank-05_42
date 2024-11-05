


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
		ASpell(const std::string& name, const std::string& effects);

		ASpell& operator=(const ASpell& origine);
		ASpell& operator=(const ASpell& origine);
};