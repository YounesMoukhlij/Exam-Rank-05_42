#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class ASpell;
class ATarget;

class TargetGenerator
{
	private : 
		TargetGenerator(const TargetGenerator& origine);
		TargetGenerator& operator=(const TargetGenerator& origine);
		TargetGenerator();
		std::map<std::string, ATarget *> MAP;
	public:
		~TargetGenerator();





		void learnTargetType(ATarget*);
		ASpell* createSpell(std::string& spell);



};
