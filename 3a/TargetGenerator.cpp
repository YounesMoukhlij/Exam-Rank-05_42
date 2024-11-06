
#include "TargetGenerator.hpp"


		void	TargetGenerator::learnTargetType(ATarget* spell)
		{
			if (spell)
			{
				if (MAP.find(spell->getType()) == MAP.end())
				{
					MAP[spell->getType()] = spell->clone();
				}
			}
		}
		void	TargetGenerator::forgetTargetType(const std::string& spell)
		{

			if (MAP.find(spell) != MAP.end())
			{
				MAP.erase(MAP.find(spell));
			}


		}
		ATarget*	TargetGenerator::createTarget(const std::string& spell)
		{
			ATarget* t = 0;


			if (MAP.find(spell) != MAP.end())
			{
				t = MAP[spell];
			}
			return t;
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
		{}
		SpellBook::SpellBook()
		{}