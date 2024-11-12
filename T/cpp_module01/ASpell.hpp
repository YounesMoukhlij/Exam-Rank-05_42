#pragma once

#include <iostream>


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
		const std::string& get() const ;

		void	setTitle(const std::string& title);
		void introduce() const;
};