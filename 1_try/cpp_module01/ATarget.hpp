
#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	protected :
		std::string _type;
	public :
		ATarget(const std::string& name, const std::string& effects);

		ATarget(const ATarget& origine);

		ATarget& operator=(const ATarget& origine);

		const std::string&	getType() const;

		virtual ~ATarget();
		ATarget* virtual clone() const = 0 ;


		void getHitBySpell(const ASpell& spell) const;
};


void ATarget::getHitBySpell(const ASpell& spell) const
{
	std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}