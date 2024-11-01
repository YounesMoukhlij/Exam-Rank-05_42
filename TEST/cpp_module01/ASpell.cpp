

#include "ASpell.hpp"

ASpell::ASpell(const std::string& name, const std::string& effects) : _name(name), _effects(effects)
{

}

ASpell::~ASpell()
{
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
