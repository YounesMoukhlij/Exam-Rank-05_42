#include "ATarget.hpp"

		ATarget::~ATarget()
		{

		}

		ATarget::ATarget(const ATarget& origine)
		{
			*this = origine;
		}
		ATarget::ATarget(const std::string& name, const std::string& effects) : _name (name), _effects(effects)
		{

		}

		ATarget& ATarget::operator=(const ATarget& origine)
		{
			_name = origine._name;
			_effects = origine._effects;
			return (*this);
		}

		const std::string& ATarget::getName() const
		{
			return _name;
		}
		const std::string& ATarget::getEffects() const
		{
			return _effects;
		}