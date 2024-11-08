
#pragma once

#include <iostream>

class ASpell
{
	private:
		ASpell();
		ASpell(const ASpell& origine);
		ASpell& operator=(const ASpell& origine);
		std::string	_name;
		std::string	_effects;
	public:
		ASpell(const std::string& name, const std::string&  effects);
		~ASpell();


		const std::string&    	getName() const;
		const std::string&	 	getEffects() const;


};

#include "ASpell.hpp"

void				ASpell::setTitle(const std::string& title)
{
	_title = title;
}

ASpell::~ASpell()
{

}

void	ASpell::introduce() const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

ASpell::ASpell(const ASpell& o)
{
	*this = o;
}

ASpell::ASpell(const std::string& name, const std::string& title ) : _name (name), _title(title)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}



ASpell& ASpell::operator=(const ASpell& o)
{
	_name = o._name;
	_title = o._title;
	return (*this);
}

const std::string& ASpell::getName() const
{
	return _name;
}
const std::string& ASpell::getTitle() const
{
	return _title;
}