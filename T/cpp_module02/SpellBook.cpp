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

				Warlock::~Warlock()
		{
			std::cout << _name << ": My job here is done!" << std::endl;
		}

		Warlock::Warlock(const Warlock& origine)
		{
			*this = origine;
		}
		Warlock::Warlock(const std::string& name, const std::string& title) : _name (name), _title(title)
		{
			std::cout << _name << ": This looks like another boring day." << std::endl;
		}

		Warlock& Warlock::operator=(const Warlock& origine)
		{
			_name = origine._name;
			_title = origine._title;
			return (*this);
		}