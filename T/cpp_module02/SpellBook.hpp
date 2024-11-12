#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "SpellBook.hpp"
#include "ATarget.hpp"

class ASpell;



class SpellBook
{
	private:
		SpellBook();
		SpellBook(const SpellBook& origine);
		SpellBook& operator=(const SpellBook& origine);
		std::map<std::string, ASpell*> MAP;
	public:
		~SpellBook();



		void learnSpell(ASpell* spell);
		void	forgetSpell(std::string& spell);
		ASpell*	createSpell(std::string& spell);
};
