#include "SpellBook.hpp"


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
		{}
		SpellBook::SpellBook()
		{}

		void	SpellBook::learnSpell(ASpell* spell)
		{
			if (spell)
			{
				if (MAP[spell->getName()] == MAP.end())
				{
					MAP[spell->getName()] = spell->clone();
				}
			}
		}
		void	SpellBook::forgetSpell(const std::string& spell)
		{

			if (MAP[spell] != MAP.end())
			{
				MAP.erase(MAP[spell]);
			}


		}
		ASpell*	SpellBook::createSpell(std::string& spell)
		{
			ASpell* t = 0;


			if (MAP[spell] != MAP.end())
			{
				t = MAP[spell];
			}
			return t;
		}