

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
		ASpell*	createSpell(std::string& spell);

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
		ASpell*	SpellBook::createSpell(std::string spell)
		{
			ASpell * t = 0;
			if (MAP.find(spell) != MAP.end())
			{
				t = MAP[spell];
			}

		}