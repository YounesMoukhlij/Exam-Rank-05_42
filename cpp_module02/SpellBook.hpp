


#pragma once

#include <iostream>
#include <map>


class SpellBook
{
	private :
		SpellBook(const SpellBook& origine);
		operator=(const SpellBook& origine);
		std::map<std::string, ASpell* > MAP;
	public:
		void learnSpell(ASpell*);
		void forgetSpell(string const &);
		ASpell* createSpell(string const &);


		~SpellBook();
}