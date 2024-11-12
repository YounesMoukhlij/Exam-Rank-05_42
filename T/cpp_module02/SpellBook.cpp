#include "SpellBook.hpp"



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
		void	SpellBook::forgetSpell(std::string& spell)
		{
			if (MAP.find(spell) != MAP.end())
			{
				delete MAP[spell];
				MAP.erase(MAP.find(spell));
			}
		}
		ASpell*	SpellBook::createSpell(std::string& spell)
		{
			ASpell * t = 0;
			if (MAP.find(spell) != MAP.end())
			{
				t = MAP[spell];
			}
			return t;
		}

		SpellBook::~SpellBook()
		{

		}

		SpellBook::SpellBook(const SpellBook& origine)
		{
			*this = origine;
		}
		SpellBook::SpellBook()
		{}

		SpellBook& SpellBook::operator=(const SpellBook& origine)
		{
			MAP = origine.MAP;
			return (*this);
		}