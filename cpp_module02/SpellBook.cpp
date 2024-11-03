

#include "SpellBook.hpp"



void SpellBook::learnSpell(ASpell* spell)
{
	if (spell)
	{
		MAP[spell->getName()] = spell->clone();
	}
}
SpellBook::~SpellBook()
{

}
SpellBook::SpellBook(const SpellBook& origine)
{
	this = &origine;
}

SpellBook::SpellBook()
{

}



void SpellBook::forgetSpell(std::string const & str )
{
	std::map<std::string, ASpell * >::iterator it = MAP.find(str);
	if (it != MAP.end())
	{
		delete it->second;
		MAP.erase(it);
	}
}

		ASpell* SpellBook::createSpell(std::string const & str)
		{
			ASpell * t = 0;

			if (MAP.find(str) != MAP.end())
				t = MAP[str];
			return (t);
		}


SpellBook& SpellBook::operator=(const SpellBook& origine)
{
	MAP = origine.MAP;
	return *this;
}