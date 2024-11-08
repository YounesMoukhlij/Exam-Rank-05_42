

#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>



class SpellBook
{
	private:
		SpellBook(const SpellBook& origine);
		SpellBook& operator=(const SpellBook& origine);
		std::map<std::string, ASpell *> MAP;
	public:
		~SpellBook();
		SpellBook();


		void	learnSpell(ASpell * spell);
		void	forgetSpell(const std::string& spell);
		ASpell*	createSpell(const std::string& spell);

};




