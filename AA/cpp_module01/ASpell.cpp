#include "ASpell.hpp"



ASpell::~ASpell()
{

}

		void	ASpell::launch(const ATarget& tar)
		{
			tar.Gi
		}



ASpell::ASpell(const ASpell& o)
{
	*this = o;
}

ASpell::ASpell(const std::string& name, const std::string& effects ) : _name (name), _effects(effects)
{

}



ASpell& ASpell::operator=(const ASpell& o)
{
	_name = o._name;
	_effects = o._effects;
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