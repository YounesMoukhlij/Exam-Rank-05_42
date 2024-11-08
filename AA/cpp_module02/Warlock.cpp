

#include "Warlock.hpp"

void				Warlock::setTitle(const std::string& title)
{
	_title = title;
}

Warlock::~Warlock()
{
	std::cout <<  _name << ": My job here is done!" << std::endl;
}

void	Warlock::introduce() const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

Warlock::Warlock(const Warlock& o)
{
	*this = o;
}

Warlock::Warlock(const std::string& name, const std::string& title ) : _name (name), _title(title)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}



Warlock& Warlock::operator=(const Warlock& o)
{
	_name = o._name;
	_title = o._title;
	return (*this);
}

const std::string& Warlock::getName() const
{
	return _name;
}
const std::string& Warlock::getTitle() const
{
	return _title;
}

		void	Warlock::learnSpell(ASpell* spell)
		{
			if (spell)
			{
				if (MAP.find(spell->getName()) == MAP.end())
					MAP[spell->getName()] = spell->clone();
			}
		}
		void	Warlock::forgetSpell(std::string spell)
		{
				if (MAP.find(spell) != MAP.end())
				{
					delete MAP[spell];
					MAP.erase(MAP.find(spell));
				}


		}
		void	Warlock::launchSpell(std::string spell, ATarget& tar)
		{
				if (MAP.find(spell) != MAP.end())
				{
					MAP[spell]->launch(tar);
				}

		}