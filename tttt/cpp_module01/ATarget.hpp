

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


ATarget::ATarget(const std::string& type) : _type(_type), _effects(effects)
{

}

ATarget::~ATarget()
{

}

const std::string&   ATarget::getType() const
{
	return _type;
}

const std::string&  ATarget::getEffects() const
{
	return _effects;
}



ATarget& ATarget::operator=(const ATarget& origine)
{
		_name = origine._name;
		_effects = origine._effects;
	return *this;
}