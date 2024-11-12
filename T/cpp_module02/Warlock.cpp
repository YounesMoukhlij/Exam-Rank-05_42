
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
				MAP.learnSpell(spell);
			}
		}
		void	Warlock::forgetSpell(std::string spell)
		{
				MAP.forgetSpell(spell);
		}
		void	Warlock::launchSpell(std::string spell, const ATarget& tar)
		{
			if (createSpell)
			if (MAP.find(spell) != MAP.end())
			{

				MAP[spell]->launch(tar);
			}
		}