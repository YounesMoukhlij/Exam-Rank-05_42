


#pragma once

#include <iostream>
#include <map>


class SpellBook
{
	private :
		Sp
		std::map<std::string, ASpell* > MAP;
	public:
		void learnSpell(ASpell*);
		void forgetSpell(string const &);
		ASpell* createSpell(string const &);
}