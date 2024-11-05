

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



		void Warlock::learnSpell(ASpell* spell)
		{
			if (spell)
			{
				if (MAP.find(spell->getName()) == MAP.end())
				{
					MAP[spell->getName()] = spell->clone();
				}
			}
		}
		void Warlock::forgetSpell(std::string spell)
		{
			if (MAP.find(spell) != MAP.end())
			{
				MAP.erase(MAP.find(spell));
			}
		}
		ASpell* Warlock::createSpell(std::string& spell)
		{
			if (MAP.find(spell) != MAP.end())
				MAP[spell]->launch(target);
		}

		Warlock::Warlock(const Warlock& origine)
{
	*this = origine;
}


		Warlock::Warlock(const std::string& name, const std::string& title) : _name(name), _title(title)
		{
			std::cout << _name << ": This looks like another boring day." << std::endl;
		}

		Warlock& Warlock::operator=(const Warlock& origine)
		{
			_name = origine._name;
			_title = origine._title;
			return *this;
		}


		Warlock::~Warlock()
		{
			std::cout << _name << ": My job here is done!" << std::endl;
		}