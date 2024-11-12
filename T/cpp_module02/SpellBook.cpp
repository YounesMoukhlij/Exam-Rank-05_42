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
			if (MAP.find(spell) != MAP.end())
			{

				MAP[spell]->launch(tar);
			}
		}

		SpellBook::~SpellBook()
		{

		}

		SpellBook::SpellBook(const SpellBook& origine)
		{
			*this = origine;
		}
		SpellBook::SpellBook(const std::string& name, const std::string& title) : _name (name), _title(title)
		{}

		SpellBook& SpellBook::operator=(const SpellBook& origine)
		{
			_name = origine._name;
			_title = origine._title;
			return (*this);
		}