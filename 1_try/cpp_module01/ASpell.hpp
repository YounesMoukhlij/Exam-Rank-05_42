

#pragma once

#include "ATarget.hpp"
#include <iostream>

class ATarget;

class ASpell
{
	protected :
		std::string _name;
		std::string _effects;
	public :
		ASpell(const std::string& name, const std::string& effects);

		ASpell& operator=(const ASpell& origine);
		ASpell(const ASpell& origine);

		const std::string&	getName() const;
		const std::string&	getTitle() const;

		virtual ~ASpell();
		ASpell* virtual clone() const = 0 ;

		void launch(const ATarget& target) const;
};



ASpell::ASpell(const std::string& name, const std::string& effects) : _name(name), _effects(effects)
{

}


ASpell& ASpell::operator=(const ASpell& origine)
{
	if (this != &origine)
	{
		_name = origine._name;
		_effects = origine._effects;
	}
	return (*this);
}
