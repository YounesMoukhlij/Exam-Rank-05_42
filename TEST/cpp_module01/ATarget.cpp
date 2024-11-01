#include "ATarget.hpp"

void ATarget::getHitBySpell(const ASpell& aspell) const
{
	std::cout << _type << " has been " << aspell.getEffects() << "!" << std::endl;
}


ATarget::ATarget(const std::string& type) : _type(type)
{

}

ATarget::~ATarget()
{

}


ATarget&  ATarget::operator=(const ATarget& origine)
{
	if (this != &origine)
	{
		_type = origine._type;
	}
	return (*this);
}



const std::string& ATarget::getType() const
{
	return _type;
}
