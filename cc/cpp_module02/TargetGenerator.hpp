#pragma once

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


		void TargetGenerator::learnTargetType(ATarget* target)
		{
			if (target)
			{
				MAP[target->getType()] = t
			}
		}

		void TargetGenerator::forgetTargetType(std::string& target)
		{
			if (MAP.find(target) != MAP.end())
			{
				MAP.erase(MAP.find(target));
			}
		}
		ATarget* TargetGenerator::createTarget(std::string& target)
		{
			ATarget *u;

			if (MAP.find(target) != MAP.end())
			{
				u = MAP[target];
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