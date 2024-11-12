#include "ASpell.hpp"

		ASpell::~ASpell()
		{

		}

		ASpell::ASpell(const ASpell& origine)
		{
			*this = origine;
		}
		ASpell::ASpell(const std::string& name, const std::string& title) : _name (name), _effects(title)
		{

		}

		ASpell& ASpell::operator=(const ASpell& origine)
		{
			_name = origine._name;
			_effects = origine._effects;
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