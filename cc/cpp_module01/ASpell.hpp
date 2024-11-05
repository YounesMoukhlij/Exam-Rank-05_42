


#pragma once 

#include <iostream>

class ASpell
{
	private:
		std::string _name;
		std::string _effects;
	public:
		ASpell(const std::string& name, const std::string& effects);
		ASpell(const ASpell& origine);

		ASpell& operator=(const ASpell& origine);

		const std::string& getName() const;
		const std::string& getEffects() const;

		virtual ~ASpell();
		virtual	ASpell* clone () const = 0;
};





#include "ASpell.hpp"

ASpell::ASpell(const ASpell& origine)
{
	*this = origine;
}


		ASpell::ASpell(const std::string& name, const std::string& effects) : _name(name), _title(title)
		{
			std::cout << _name << ": This looks like another boring day." << std::endl;
		}

		ASpell& ASpell::operator=(const ASpell& origine)
		{
			_name = origine._name;
			_title = origine._title;
			return *this;
		}


		ASpell::~ASpell()
		{
			std::cout << _name << ": My job here is done!" << std::endl;
		}

void ASpell::introduce() const
{
	std::cout << _name << ": I am " << _name << ", "<< _title << "!" << std::endl;
}

		const std::string& ASpell::getName() const
		{
			return _name;
		}
		const std::string& ASpell::getTitle() const
		{
			return _title;
		}



		void	ASpell::setTitle(const std::string& title)
		{
			_title = title;
		}