


#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"

class ASpell;

class SpellBook
{
	private :
		SpellBook(const SpellBook& origine);
		SpellBook& operator=(const SpellBook& origine);
		std::map<std::string, ASpell* > MAP;
	public:
		void learnSpell(ASpell* spell);
		void forgetSpell(std::string const & str);
		ASpell* createSpell(std::string const & str);


		~SpellBook();
		SpellBook();
};


void SpellBook::learnSpell(ASpell* spell)
{
	if (spell)
	{
		MAP[spell->getName()] = spell->clone;
	}
}



void SpellBook::forgetSpell(std::string const & str )
{
	std::map<std::string, ASpell * >::iterator it = MAP.find(str);
	if (it != MAP.end())
	{
		delete it->second;
		MAP.erase(it);
	}
}

		ASpell* SpellBook::createSpell(std::string const & str)
		{
			ASpell * t = 0;

			if (MAP.find(str) != MAP.end())
				t = MAP[str];
			return (t);
		}

