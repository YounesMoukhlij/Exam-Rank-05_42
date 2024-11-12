
#include "Warlock.hpp"

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

		const std::string& Warlock::getName() const
		{
			return _name;
		}
		const std::string& Warlock::getTitle() const
		{
			return _title;
		}

		void	Warlock::setTitle(const std::string& title)
		{
			_title = title;
		}

		void Warlock::introduce() const
		{
			std::cout << _name << ": I am " << _name << ", " <<  _title << "!" << std::endl;
		}


		void Warlock::learnSpell(ASpell* spell)
		{
			
			if (spell)
			{
				if (MAP.find(spell->getName()) == MAP.end())
				{
				std::cout << " YYYY " << std::endl;
					MAP[spell->getName()] = spell->clone();
				}
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
		void	Warlock::launchSpell(std::string spell, const ATarget& tar)
		{
			if (MAP.find(spell) != MAP.end())
			{
				std::cout << " asasd " << std::endl;
				MAP[spell]->launch(tar);
			}
		}