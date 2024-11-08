

#pragma once

#include <iostream>


class Warlock
{
	private:
		std::string _name;
		std::string _title;
		Warlock(const Warlock& o);
		Warlock& operator=(const Warlock& o);
	public:
		Warlock(const std::string& name, const std::string& title );
		~Warlock();

		const std::string& getName() const;
		const std::string& getTitle() const;

		void				setTitle(const std::string& title);
		void				introduce() const;

};


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