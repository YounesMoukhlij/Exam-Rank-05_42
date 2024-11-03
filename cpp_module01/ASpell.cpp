
#include "ASpell.hpp"


ASpell::ASpell(const std::string& name, const std::string& effects) : _name(name), _effects(effects)
{

}

ASpell::~ASpell()
{

}

		ASpell::ASpell(const ASpell& origine)
		{
			*this = origine;
		}




void ASpell::launch(const ATarget& target) const
{
	target.getHitBySpell(*this);
}


const std::string& ASpell::getName() const
{
	return _name;
}
const std::string& ASpell::getEffects() const
{
	return _effects;
}

ASpell& ASpell::operator=(const ASpell& origine)
{
		_name = origine._name;
		_effects = origine._effects;
	return *this;
}