

#include "ASpell.hpp"

ASpell::ASpell(const std::string& name, const std::string& title) : _name(name), getters(title)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

ASpell::~ASpell()
{
	std::cout << _name  << ": My job here is done!" << std::endl;
}


		ASpell&  ASpell::operator=(const ASpell& origine)
		{
			if (this != &origine)
			{
				_effects = origine._effects;
				_name = origine._name;
			}
			return (*this);
		}



const std::string& ASpell::getName() const
{
	return _name;
}
const std::string& ASpell::getEffects() const
{
	return _effects;
}
