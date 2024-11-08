#pragma once

#include <iostream>

class ATarget
{
	private:
		ATarget();
		ATarget(const ATarget& o);
		ATarget& operator=(const ATarget& o);
		std::string	_type;
	public:
		ATarget(const std::string& name, const std::string&  effects);
		virtual ~ATarget();


		const std::string&    	getName() const;
		const std::string&	 	getEffects() const;

		virtual ATarget*  clone () const = 0;


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