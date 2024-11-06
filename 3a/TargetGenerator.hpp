

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



		void	TargetGenerator::learnSpell(ASpell* spell)
		{
			if (spell)
			{
				if (MAP[spell->getName()] == MAP.end())
				{
					MAP[spell->getName()] = spell->clone();
				}
			}
		}
		void	TargetGenerator::forgetSpell(const std::string& spell)
		{

			if (MAP[spell] != MAP.end())
			{
				MAP.erase(MAP[spell]);
			}


		}
		ASpell*	TargetGenerator::createSpell(std::string& spell)
		{
			ASpell* t = 0;


			if (MAP[spell] != MAP.end())
			{
				t = MAP[spell];
			}
			return t;
		}