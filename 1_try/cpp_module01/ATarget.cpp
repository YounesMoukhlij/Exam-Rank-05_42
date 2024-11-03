

#include "ATarget.hpp"


void ATarget::getHitBySpell(const ASpell& spell) const
{
	std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}

ATarget& ATarget::operator=(const ATarget& origine)
{
		_type = origine._type;
	return *this;
}

ATarget::ATarget(const ATarget& origine)
{
		_type = origine._type;
}

ATarget::ATarget(const std::string& type): _type(type)
{

}

const std::string& ATarget::getType() const
{
	return _type;
}

ATarget::~ATarget()
{

}