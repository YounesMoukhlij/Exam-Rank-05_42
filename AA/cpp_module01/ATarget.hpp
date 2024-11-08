#pragma once

#include <iostream>

class ATarget
{
	private:
		ATarget();
		ATarget(const ATarget& o);
		ATarget& operator=(const ATarget& o);
		std::string	_name;
		std::string	_effects;
	public:
		ATarget(const std::string& name, const std::string&  effects);
		virtual ~ATarget();


		const std::string&    	getName() const;
		const std::string&	 	getEffects() const;

		virtual ATarget*  clone () const = 0;


};