


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

