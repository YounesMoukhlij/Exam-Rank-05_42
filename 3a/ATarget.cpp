

#include "ATarget.hpp"



void ATarget::getHitBySpell(const ASpell& spell) const
{
	std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}


ATarget::ATarget(const std::string& type) : _type(type)
{

}

ATarget::~ATarget()
{

}

ATarget::ATarget()
{

}
		ATarget::ATarget(const ATarget& origine)
		{
			*this = origine;
		}


const std::string&   ATarget::getType() const
{
	return _type;
}



ATarget& ATarget::operator=(const ATarget& origine)
{
	_type = origine._type;
	return *this;
}







