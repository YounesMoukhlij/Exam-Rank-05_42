


#pragma once

#include <iostream>
#include <map>


class SpellBook
{
	private :
		SpellBook(const SpellBook& origine);
		SpellBook& operator=(const SpellBook& origine);
		std::map<std::string, ASpell* > MAP;
	public:
		void learnSpell(ASpell*);
		void forgetSpell(std::string const &);
		ASpell* createSpell(std::string const &);


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



void SpellBook::forgetSpell(std::string const &)
{
	std::map<std::string, ASpell * >::iterator it = MAP.find()
}
