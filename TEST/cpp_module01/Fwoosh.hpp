

#pragma once

#include <iostream>
#include <ASpell.hpp>

class Fwoosh
{
	protected:
		std::string _name;
		std::string _effects;

	public:
		Fwoosh& operator=(const Fwoosh& origine);
		Fwoosh(const std::string& name, const std::string& effects);
		virtual ~Fwoosh();

		const std::string& getName() const;
		const std::string& getEffects() const;

		virtual Fwoosh* clone() = 0;

		void	launch(const ATarget& target);

};


Fwoosh() : ASpell()