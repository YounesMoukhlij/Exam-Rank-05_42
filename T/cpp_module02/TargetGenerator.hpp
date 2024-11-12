#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "SpellBook.hpp"
#include "ATarget.hpp"

class ASpell;



class TargetGenerator
{
	private:
		TargetGenerator();
		TargetGenerator(const TargetGenerator& origine);
		TargetGenerator& operator=(const TargetGenerator& origine);
		std::map<std::string, ATarget*> MAP;
	public:
		~TargetGenerator();



		void learnTargetType(ATarget* tar);
		void forgetTargetType(std::string const &tar);
		ATarget* createTarget(std::string const &tar);
};