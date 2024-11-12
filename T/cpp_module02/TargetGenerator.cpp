#include "TargetGenerator.hpp"



		void TargetGenerator::learnSpell(ASpell* spell)
		{
			
			if (spell)
			{
				if (MAP.find(spell->getName()) == MAP.end())
				{
					MAP[spell->getName()] = spell->clone();
				}
			}
		}
		void	TargetGenerator::forgetSpell(std::string& spell)
		{
			if (MAP.find(spell) != MAP.end())
			{
				delete MAP[spell];
				MAP.erase(MAP.find(spell));
			}
		}
		ATarget*	TargetGenerator::createTarget(std::string& spell)
		{
			ATarget * t;
			if (MAP.find(spell) != MAP.end())
			{
				t = MAP[spell];
			}
			return t;
		}

		TargetGenerator::~TargetGenerator()
		{

		}

		TargetGenerator::TargetGenerator(const TargetGenerator& origine)
		{
			*this = origine;
		}
		TargetGenerator::TargetGenerator()
		{}

		TargetGenerator& TargetGenerator::operator=(const TargetGenerator& origine)
		{
			MAP = origine.MAP;
			return (*this);
		}