

#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class ASpell;

class SpellBook
{
	private : 
		SpellBook(const SpellBook& origine);
		SpellBook& operator=(const SpellBook& origine);
		SpellBook();
		std::map<std::string, ASpell *> MAP;
	public:
		~SpellBook();





		void learnSpell(ASpell* spell);
		void forgetSpell(std::string& spell);
		ASpell* createSpell(std::string& spell);



};



		void SpellBook::learnSpell(ASpell* spell)
		{
			if (spell)
			{
				if (MAP.find(spell->getName()) == MAP.end())
				{
					MAP[spell->getName()] = spell->clone();
				}
			}
		}
		void SpellBook::forgetSpell(std::string spell)
		{
			if (MAP.find(spell) != MAP.end())
			{
				MAP.erase(MAP.find(spell));
			}
		}
		ASpell* SpellBook::createSpell(std::string& spell)
		{
			if (MAP.find(spell) != MAP.end())
				MAP[spell]->launch(target);
		}

		SpellBook::SpellBook(const SpellBook& origine)
{
	*this = origine;
}



		SpellBook& SpellBook::operator=(const SpellBook& origine)
		{
			_ = origine._name;
			_title = origine._title;
			return *this;
		}


		SpellBook::~SpellBook()
		{
			std::cout << _name << ": My job here is done!" << std::endl;
		}