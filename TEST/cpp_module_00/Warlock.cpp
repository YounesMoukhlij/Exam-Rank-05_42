
#include "Warlock.hpp"

Warlock::Warlock(const std::string& name, const std::string& title) : _name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << _name  << ": My job here is done!" << std::endl;
}


void Warlock::introduce() const
{
	std::cout << _name << ": I am " << _name << ", "  << _title << std::endl;
}

		Warlock&  Warlock::operator=(const Warlock& origine)
		{
			if (this != &origine)
			{
				_title = origine._title;
				_name = origine._name;
			}
			return (*this);
		}

void	Warlock::setTitle(const std::string& title)
{
	_title = title;
}
		const std::string& Warlock::getName() const
		{
			return _name;
		}
		const std::string& Warlock::getTitle() const
		{
			return _title;
		}