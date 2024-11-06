

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
		void	forgetSpell(const std::string& spell);
		ASpell*	createSpell(std::string& spell);

};