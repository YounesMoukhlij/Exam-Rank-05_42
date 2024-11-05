
#include "ASpell.hpp"

ASpell::ASpell(const ASpell& origine)
{
	*this = origine;
}


		ASpell::ASpell(const std::string& name, const std::string& effects) : _name(name), _effects(effects)
		{

		}

		ASpell& ASpell::operator=(const ASpell& origine)
		{
			_name = origine._name;
			_effects = origine._effects;
			return *this;
		}


		ASpell::~ASpell()
		{

		}



		const std::string& ASpell::getName() const
		{
			return _name;
		}
		const std::string& ASpell::getEffects() const
		{
			return _effects;
		}

	void  ASpell::launch(const ATarget& tae)