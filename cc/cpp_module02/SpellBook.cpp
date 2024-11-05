
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

		void SpellBook::forgetSpell(std::string& spell)
		{
			if (MAP.find(spell) != MAP.end())
			{
				MAP.erase(MAP.find(spell));
			}
		}
		ASpell* SpellBook::createSpell(std::string& spell)
		{
			ASpell *u = 0;

			if (MAP.find(spell) != MAP.end())
			{
				u = MAP[spell];
			}
			return u;
		}

		SpellBook::SpellBook(const SpellBook& origine)
{
	*this = origine;
}



		SpellBook& SpellBook::operator=(const SpellBook& origine)
		{
			MAP = origine.MAP;
			return *this;
		}


		SpellBook::~SpellBook()
		{

		}
		SpellBook::SpellBook()
		{

		}