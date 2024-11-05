
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
			if (MAP.find(spell) != MAP.end())
				MAP[spell]->launch(target);
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