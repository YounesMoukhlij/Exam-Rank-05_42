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

ATarget::ATarget(const std::string& type) : _type (type), _effects(effects)
{

}



ATarget& ATarget::operator=(const ATarget& o)
{
	_type = o._type;
	return (*this);
}

const std::string& ATarget::getType() const
{
	return _type;
}
