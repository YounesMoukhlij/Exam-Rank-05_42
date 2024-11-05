#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class ASpell;

class TargetGenerator
{
	private : 
		TargetGenerator(const TargetGenerator& origine);
		TargetGenerator& operator=(const TargetGenerator& origine);
		TargetGenerator();
		std::map<std::string, ASpell *> MAP;
	public:
		~TargetGenerator();





		void learnSpell(ASpell* spell);
		void forgetSpell(std::string& spell);
		ASpell* createSpell(std::string& spell);



};
