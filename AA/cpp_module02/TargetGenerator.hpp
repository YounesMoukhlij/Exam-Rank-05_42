
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




#include "TargetGenerator.hpp"


TargetGenerator::~TargetGenerator()
{

}



TargetGenerator::TargetGenerator(const TargetGenerator& o)
{
	*this = o;
}





TargetGenerator& TargetGenerator::operator=(const TargetGenerator& o)
{
	MAP = o.MAP;
	return (*this);
}



		void	TargetGenerator::learnSpell(ASpell* spell)
		{
			if (spell)
			{
				if (MAP.find(spell->getName()) == MAP.end())
					MAP[spell->getName()] = spell->clone();
			}
		}
		void	TargetGenerator::forgetSpell(std::string spell)
		{
				if (MAP.find(spell) != MAP.end())
				{
					delete MAP[spell];
					MAP.erase(MAP.find(spell));
				}


		}
		ASpell*	TargetGenerator::createSpell(std::string spell)
		{
			ASpell * t = 0;
			if (MAP.find(spell) != MAP.end())
			{
				t = MAP[spell];
			}
			return t;

		}