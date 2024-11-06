

#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"



class TargetGenerator
{
	private:
		TargetGenerator();
		TargetGenerator(const TargetGenerator& origine);
		TargetGenerator& operator=(const TargetGenerator& origine);

		std::map<std::string , ATarget *> MAP;
	public:

		~TargetGenerator();

		void	learnTargetType(ATarget* spell);
		void	forgetTargetType(const std::string& spell);
		ATarget*	createTarget(std::string& spell);

};



		void	TargetGenerator::learnTargetType(ATarget* spell)
		{
			if (spell)
			{
				if (MAP.find(spell->getName()) == MAP.end())
				{
					MAP[spell->getName()] = spell->clone();
				}
			}
		}
		void	TargetGenerator::forgetTargetType(const std::string& spell)
		{

			if (MAP.find(spell) != MAP.end())
			{
				MAP.erase(MAP[spell]);
			}


		}
		ASpell*	TargetGenerator::createTarget(std::string& spell)
		{
			ASpell* t = 0;


			if (MAP.find(spell) != MAP.end())
			{
				t = MAP[spell];
			}
			return t;
		}