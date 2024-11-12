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
		void	SpellBook::forgetSpell(std::string spell)
		{
			if (MAP.find(spell) != MAP.end())
			{
				delete MAP[spell];
				MAP.erase(MAP.find(spell));
			}
		}
		ASpell*	SpellBook::laucreateSpellnchSpell(std::string spell, const ATarget& tar)
		{
			if (MAP.find(spell) != MAP.end())
			{

				MAP[spell]->launch(tar);
			}
		}