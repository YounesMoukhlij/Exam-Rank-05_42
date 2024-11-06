

#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"



class TargetGenerator
{
	private:
		TargetGenerator(const TargetGenerator& origine);
		TargetGenerator& operator=(const TargetGenerator& origine);

		std::map<std::string , ATarget *> MAP;
	public:

		TargetGenerator();
		~TargetGenerator();

		void	learnTargetType(ATarget* spell);
		void	forgetTargetType(const std::string& spell);
		ATarget*	createTarget(const std::string& spell);

};


