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





		void learnTargetType(ATarget* target);
		void forgetTargetType(std::string const & target);
		ATarget* createTarget(std::string const & target)


};


		void TargetGenerator::learnTargetType(ASpell* spell)
		{
			if (spell)
			{
				if (MAP.find(spell->getName()) == MAP.end())
				{
					MAP[spell->getName()] = spell->clone();
				}
			}
		}

		void TargetGenerator::forgetTargetType(std::string& spell)
		{
			if (MAP.find(spell) != MAP.end())
			{
				MAP.erase(MAP.find(spell));
			}
		}
		ASpell* TargetGenerator::createTarget(std::string& spell)
		{
			ASpell *u;

			if (MAP.find(spell) != MAP.end())
			{
				u = MAP[spell];
			}
			return u;
		}

		TargetGenerator::TargetGenerator(const TargetGenerator& origine)
{
	*this = origine;
}



		TargetGenerator& TargetGenerator::operator=(const TargetGenerator& origine)
		{
			MAP = origine.MAP;
			return *this;
		}


		TargetGenerator::~TargetGenerator()
		{

		}