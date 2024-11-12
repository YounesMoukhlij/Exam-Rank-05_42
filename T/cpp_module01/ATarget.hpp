#pragma once

#include <iostream>


class ATarget
{
	private:
		std::string _name;
		std::string _effects;
		ATarget();
		ATarget(const ATarget& origine);
		ATarget& operator=(const ATarget& origine);
	public:
		~ATarget();
		ATarget(const std::string& name, const std::string& effects);


		const std::string& getName() const;
		const std::string& getEffects() const ;

};