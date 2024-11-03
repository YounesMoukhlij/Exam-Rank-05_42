

#pragma once

#include "ATarget.hpp"
#include <iostream>

class ATarget;

class ASpell
{
	protected :
		std::string _name;
		std::string _effects;
	public :
		ASpell(const std::string& name, const std::string& effects);

		ASpell& operator=(const ASpell& origine);
		ASpell(const ASpell& origine);

		const std::string&	getName() const;
		const std::string&	getEffects() const;

		virtual ~ASpell();
		virtual ASpell*  clone() const = 0 ;

		void launch(const ATarget& target) const;
};



