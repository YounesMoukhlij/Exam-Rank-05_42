
#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	protected :
		std::string _type;
	public :
		ATarget(const ATarget& origine);
		ATarget(const std::string& type);


		ATarget& operator=(const ATarget& origine);

		const std::string&	getType() const;

		virtual ~ATarget();
		virtual ATarget*  clone() const = 0 ;


		void getHitBySpell(const ASpell& spell) const;
};


void ATarget::getHitBySpell(const ASpell& spell) const
{
	std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}

ATarget& ATarget::operator=(const ATarget& origine)
{
		_type = origine._type;
	return *this;
}
ATarget& ATarget::operator=(const ATarget& origine)
{
		_type = origine._type;
	return *this;
}

ATarget::ATarget(const std::string& type): _type(type)
{

}

const std::string& ATarget::getType() const
{
	return _type;
}
