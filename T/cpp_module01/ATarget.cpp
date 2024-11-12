#include "ATarget.hpp"

		ATarget::~ATarget()
		{

		}

		ATarget::ATarget(const ATarget& origine)
		{
			*this = origine;
		}
		ATarget::ATarget(const std::string& type) : _type (type)
		{

		}

		ATarget& ATarget::operator=(const ATarget& origine)
		{

			_type = origine._type;
			return (*this);
		}


		const std::string& ATarget::getType() const
		{
			return _type;
		}