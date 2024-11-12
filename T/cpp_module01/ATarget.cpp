#include "ATarget.hpp"

		ATarget::~ATarget()
		{

		}

		ATarget::ATarget(const ATarget& origine)
		{
			*this = origine;
		}
		ATarget::		ATarget(const std::string& type) : _type (type)
		{

		}

		ATarget& ATarget::operator=(const ATarget& origine)
		{
			_name = origine._name;
			_effects = origine._effects;
			return (*this);
		}


		const std::string& ATarget::getType() const
		{
			return _effects;
		}