


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
		void forgetSpell(string const &);
		ASpell* createSpell(string const &);


		~SpellBook();
		SpellBook();
};


void SpellBook::learnSpell(ASpell* spell)
{
	if (spell)
	{
		spell
	}
}
