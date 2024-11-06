

#pragma once


#include <iostream>


class ATarget
{
	protected:
		ATarget();
		ATarget(const ATarget& origine);
		ATarget& operator=(const ATarget& origine);
		std::string	_type;
	public:
		ATarget(const std::string& type);
		virtual ~ATarget();


		const std::string&    	getType() const;



		virtual ATarget* clone () const = 0;




};


ASpell::ASpell(const std::string& name, const std::string& title) : _name(name), _effects(effects)
{

}

ASpell::~ASpell()
{

}

const std::string&   ASpell::getName() const
{
	return _name;
}

const std::string&  ASpell::getEffects() const
{
	return _effects;
}



ASpell& ASpell::operator=(const ASpell& origine)
{
		_name = origine._name;
		_effects = origine._effects;
	return *this;
}