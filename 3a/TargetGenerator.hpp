

#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"



class SpellBook
{
	private:
		SpellBook();
		SpellBook(const SpellBook& origine);
		SpellBook& operator=(const SpellBook& origine);

		std::map<std::string , ATarget *> MAP;
	public:

		~SpellBook();

		void	learnTargetType(ATarget* spell);
		void	forgetTargetType(const std::string& spell);
		ATarget*	createTarget(std::string& spell);

};



		void	SpellBook::learnSpell(ASpell* spell)
		{
			if (spell)
			{
				if (MAP[spell->getName()] == MAP.end())
				{
					MAP[spell->getName()] = spell->clone();
				}
			}
		}
		void	SpellBook::forgetSpell(const std::string& spell)
		{

			if (MAP[spell] != MAP.end())
			{
				MAP.erase(MAP[spell]);
			}


		}
		ASpell*	SpellBook::createSpell(std::string& spell)
		{
			ASpell* t = 0;


			if (MAP[spell] != MAP.end())
			{
				t = MAP[spell];
			}
			return t;
		}