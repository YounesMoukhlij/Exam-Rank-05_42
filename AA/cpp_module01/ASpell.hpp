
#pragma once

#include <iostream>

class ASpell
{
	private:
		ASpell();
		ASpell(const ASpell& o);
		ASpell& operator=(const ASpell& o);
		std::string	_name;
		std::string	_effects;
	public:
		ASpell(const std::string& name, const std::string&  effects);
		~ASpell();


		const std::string&    	getName() const;
		const std::string&	 	getEffects() const;


};

#include "ASpell.hpp"



ASpell::~ASpell()
{

}


ASpell::ASpell(const ASpell& o)
{
	*this = o;
}

ASpell::ASpell(const std::string& name, const std::string& effects ) : _name (name), _effects(effects)
{

}



ASpell& ASpell::operator=(const ASpell& o)
{
	_name = o._name;
	_effects = o._effects;
	return (*this);
}

const std::string& ASpell::getName() const
{
	return _name;
}
const std::string& ASpell::getEffects() const
{
	return _effects;
}