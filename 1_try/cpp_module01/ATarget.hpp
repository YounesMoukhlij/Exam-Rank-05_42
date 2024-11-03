
#pragma once

#include <iostream>

class ATarget
{
	protected :
		std::string _type;
	public :
		ATarget(const std::string& name, const std::string& effects);

		ATarget(const ATarget& origine);

		ATarget& operator=(const ATarget& origine);

		const std::string&	getType() const;

		virtual ~ATarget();
		ATarget* virtual clone() const = 0 ;


		getHitBySpell() const 
};