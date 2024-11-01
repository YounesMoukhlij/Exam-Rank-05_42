#pragma once

#include <iostream>


class ASpell
{
	protected:
		std::string _type;

	public:
		ASpell& operator=(const ASpell& origine);
		ASpell(const std::string& name, const std::string& effects);
		virtual ~ASpell();

		const std::string& getName() const;
		const std::string& getType() const;

		virtual ASpell* clone() = 0;


};