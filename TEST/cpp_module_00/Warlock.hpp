

#pragma once

#include <iostream>

class Warlock
{
	private:
		std::string _name;
		std::string _title;
	public:
		Warlock& operator=(const Warlock& origine);
		Warlock(const std::string& name, const std::string& title);
		~Warlock();

		const std::string& getName() const;
		const std::string& getTitle() const;
		void introduce() const;

};

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
	std::cout << _name << ": I am " << _name << ", "  _title << std::endl;
}

		Warlock&  Warlock::operator=(const Warlock& origine)
		{
			if (th)

		}
