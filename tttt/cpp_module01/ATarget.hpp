

#pragma once


#include <iostream>
#include "ASpell.hpp"

class ASpell;


class ATarget
{
	protected:
		ATarget();
		ATarget(const ATarget& origine);
		ATarget& operator=(const ATarget& origine);
		std::string	_type;
	public:
		ATarget(const std::string& type);
		virtual ~ATarget();


		const std::string&    	getType() const;



		virtual ATarget* clone () const = 0;


		void getHitBySpell(const ASpell& spell);

};
		void ATarget::getHitBySpell(const ASpell& spell)
		{
			std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
		}


ATarget::ATarget(const std::string& type) : _type(type)
{

}

ATarget::~ATarget()
{

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