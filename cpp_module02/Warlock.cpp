#include "Warlock.hpp"

Warlock::Warlock(const Warlock& origine)
{
	*this = origine;
}


		Warlock::Warlock(const std::string& name, const std::string& title) : _name(name), _title(title)
		{
			std::cout << _name << ": This looks like another boring day." << std::endl;
		}

		Warlock& Warlock::operator=(const Warlock& origine)
		{
			_name = origine._name;
			_title = origine._title;
			return *this;
		}


		Warlock::~Warlock()
		{
			std::cout << _name << ": My job here is done!" << std::endl;
		}

void Warlock::introduce() const
{
	std::cout << _name << ": I am " << _name << ", "<< _title << "!" << std::endl;
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


		void Warlock::learnSpell(ASpell* spell)
		{
			MAP.learnSpell(spell);
		}



		void Warlock::forgetSpell( std::string& spell) 
		{
			MAP.forgetSpell(spell);
		}



		void Warlock::launchSpell(std::string spell, const ATarget& target)
		{
			if (MAP.createSpell(spell))
				MAP.createSpell(spell)->launch(target);
		}
