
#pragma once

#include <iostream>

class ATarget
{
		protected :
		std::string _t;
		std::string _effects;
	public :
		ATarget(const std::string& name, const std::string& effects);

		ATarget(const ATarget& origine);

		ATarget& operator=(const ATarget& origine);
		const std::string&	getName() const;
		const std::string&	getTitle() const;

		virtual ~ATarget();
		ATarget* virtual clone() const = 0 ;
};