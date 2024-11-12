#pragma once

#include <iostream>

#include "ATarget.hpp"


class ASpell
{
	private:
		std::string _name;
		std::string _effects;
		ASpell();
		ASpell(const ASpell& origine);
		ASpell& operator=(const ASpell& origine);
	public:
		~ASpell();
		ASpell(const std::string& name, const std::string& effects);


		const std::string& getName() const;
		const std::string& getEffects() const ;

		void launch(const ATarget& tar);

};
		void ASpell::launch(const ATarget& tar)
		{
			
		}