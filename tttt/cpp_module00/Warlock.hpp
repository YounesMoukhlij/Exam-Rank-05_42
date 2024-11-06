

#pragma once

#include <iostream>

class Warlock
{
	private:
		std::string _name;
		std::string _title;
		Warlock& operator=(const Warlock& o);
		Warlock(const Warlock& o);

	public:
		Warlock(const std::string& name, const std::string& title);

		const std::string& getName() const;
		const std::string& getTitle() const;

		~Warlock();

		void	introduce () const;

		void	setTitle(const std::string& title);
};


Warlock & Warlock::operator=(const Warlock & o)
{
	_name = o._name;
	_title = o._title;

	return (this);
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


		Warlock::Warlock(const std::string& name, const std::string& title) : _name (name), _title(title)
		{
			std::cout <<  _name <<": This looks like another boring day." << std::endl;
			
		}

		Warlock::~Warlock()
		{
			std::cout << _name << ": My job here is done!" << std::endl;
		}
