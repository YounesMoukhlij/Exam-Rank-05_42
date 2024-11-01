#pragma once

#include <iostream>
#include <ASpell.hpp>

class ATarget
{
	protected:
		std::string _type;

	public:
		ATarget& operator=(const ATarget& origine);
		ATarget(const std::string& type);
		virtual ~ATarget();

		const std::string& getType() const;

		virtual ATarget* clone() = 0;
		void getHitBySpell(const ASpell& aspell);

};

void ATarget::getHitBySpell(const ASpell aspell)
{
	std::cout << _type << " has been " << aspell.getEffets() << "!" << std::endl;
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



const std::string& ATarget::getName() const
{
	return _name;
}
const std::string& ATarget::getEffects() const
{
	return _effects;
}
