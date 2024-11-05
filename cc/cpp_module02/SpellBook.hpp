

#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class SpellBook
{
	private : 
		std::string _name;
		std::string _title;
		SpellBook(const SpellBook& origine);
		SpellBook& operator=(const SpellBook& origine);
		SpellBook();
		std::map<std::string, ASpell *> MAP;
	public:
		~SpellBook();
		SpellBook(const std::string& name, const std::string& title);

		const std::string& getName() const;
		const std::string& getTitle() const;

		void	setTitle(const std::string& title);
		void	introduce() const;



		void learnSpell(ASpell*);
		void forgetSpell(std::string& spell);
		ASpell* createSpell(std::string spell&, const ATarget& target);



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
		ASpell* Warlock::createSpell(std::string spell, const ATarget& target)
		{
			if (MAP.find(spell) != MAP.end())
				MAP[spell]->launch(target);
		}