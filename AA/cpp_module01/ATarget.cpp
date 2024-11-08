#include "ATarget.hpp"



ATarget::~ATarget()
{

}


ATarget::ATarget(const ATarget& o)
{
	*this = o;
}

ATarget::ATarget(const std::string& type) : _type (type)
{

}


void	ATarget::getHitBySpell(const ASpell& spell)
{
	std::cout << _type << " has been "<EFFECTS>"!"
}

ATarget& ATarget::operator=(const ATarget& o)
{
	_type = o._type;
	return (*this);
}

const std::string& ATarget::getType() const
{
	return _type;
}

