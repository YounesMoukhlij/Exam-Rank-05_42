#pragma once

#include <iostream>

#include "ATarget.hpp"

class ATarget;

class ASpell
{
	private:
		std::string _name;
		std::string _effects;
		ASpell(const ASpell& origine);
		ASpell& operator=(const ASpell& origine);
	public:
		virtual ~ASpell();
		ASpell();
		ASpell(const std::string& name, const std::string& effects);


		const std::string& getName() const;
		const std::string& getEffects() const ;

		void launch(const ATarget& tar);
		

};
