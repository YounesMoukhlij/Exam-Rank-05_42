


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

		std::map<std::string , ASpell *> MAP;
	public:

		~SpellBook();

		void	learnSpell(ASpell* spell);
		void	forgetSpell(const std::string& spell);
		ASpell*	createSpell(std::string& spell);

};
		SpellBook::~SpellBook()
		{}
		SpellBook::SpellBook()
		{}

		void	SpellBook::learnSpell(ASpell* spell)
		{
			std::map<std::string, ASpell *>::iterator it = MAP.find(spell.getName());
			if (it != MAP.end())
			{
				
			}
		}
		void	SpellBook::forgetSpell(const std::string& spell)
		{
			std::map<std::string, ASpell *>::iterator it = MAP.find(spell.getName());
			if (it != MAP.end())
			{

			}

		}
		ASpell*	SpellBook::createSpell(std::string& spell)
		{

		}