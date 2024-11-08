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

#include "ATarget.hpp"



ATarget::~ATarget()
{

}


ATarget::ATarget(const ATarget& o)
{
	*this = o;
}

ATarget::ATarget(const std::string& name, const std::string& effects ) : _name (name), _effects(effects)
{

}



ATarget& ATarget::operator=(const ATarget& o)
{
	_name = o._name;
	_effects = o._effects;
	return (*this);
}

const std::string& ATarget::getName() const
{
	return _name;
}
const std::string& ATarget::getEffects() const
{
	return _effects;
}