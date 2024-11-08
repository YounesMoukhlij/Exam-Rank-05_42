

#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>



class SpellBook
{
	private:
		SpellBook();
		SpellBook(const SpellBook& origine);
		SpellBook& operator=(const SpellBook& origine);
		std::map<std::string, ASpell *> MAP;
	public:
		~SpellBook();


		void	learnSpell(ASpell * spell);
		void	forgetSpell(std::string& spell);
		void	createSpell(std::string& spell);

};




#include "SpellBook.hpp"


SpellBook::~SpellBook()
{

}



SpellBook::SpellBook(const SpellBook& o)
{
	*this = o;
}





SpellBook& SpellBook::operator=(const SpellBook& o)
{
	MAP = o.MAP;
	return (*this);
}

const std::string& SpellBook::getName() const
{
	return _name;
}
const std::string& SpellBook::getTitle() const
{
	return _title;
}

		void	SpellBook::learnSpell(ASpell* spell)
		{
			if (spell)
			{
				if (MAP.find(spell->getName()) == MAP.end())
					MAP[spell->getName()] = spell->clone();
			}
		}
		void	SpellBook::forgetSpell(std::string spell)
		{
				if (MAP.find(spell) != MAP.end())
				{
					delete MAP[spell];
					MAP.erase(MAP.find(spell));
				}


		}
		void	SpellBook::launchSpell(std::string spell, ATarget& tar)
		{
				if (MAP.find(spell) != MAP.end())
				{
					MAP[spell]->launch(tar);
				}

		}