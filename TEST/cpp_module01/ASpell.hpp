

#pragma once

#include <iostream>
#include <ASP

class ASpell
{
	protected:
		std::string _name;
		std::string _effects;

	public:
		ASpell& operator=(const ASpell& origine);
		ASpell(const std::string& name, const std::string& effects);
		virtual ~ASpell();

		const std::string& getName() const;
		const std::string& getEffects() const;

		virtual ASpell* clone() = 0;

		void	launch(const ATarget& target);

};