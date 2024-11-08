
#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>



class TargetGenerator
{
	private:
		TargetGenerator();
		TargetGenerator(const TargetGenerator& origine);
		TargetGenerator& operator=(const TargetGenerator& origine);
		std::map<std::string, ATarget *> MAP;
	public:
		~TargetGenerator();


		void	learnTargetType(ATarget * spell);
		void	forgetTargetType(std::string& spell);
		ATarget*	createTarget(std::string& spell);

};



