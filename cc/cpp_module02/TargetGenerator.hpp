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
		void forgetTargetType(string const &);
		ATarget* createTarget(string const &)


};


		void SpellBook::learnSpell(ASpell* spell)
		{
			if (spell)
			{
				if (MAP.find(spell->getName()) == MAP.end())
				{
					MAP[spell->getName()] = spell->clone();
				}
			}
		}

		void SpellBook::forgetSpell(std::string& spell)
		{
			if (MAP.find(spell) != MAP.end())
			{
				MAP.erase(MAP.find(spell));
			}
		}
		ASpell* SpellBook::createSpell(std::string& spell)
		{
			ASpell *u;

			if (MAP.find(spell) != MAP.end())
			{
				u = MAP[spell];
			}
			return u;
		}

		SpellBook::SpellBook(const SpellBook& origine)
{
	*this = origine;
}



		SpellBook& SpellBook::operator=(const SpellBook& origine)
		{
			MAP = origine.MAP;
			return *this;
		}


		SpellBook::~SpellBook()
		{

		}