

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
		const std::string& f() const;

		~Warlock();

		void	introduce () const;

		void	setTitle(const std::string& title);
};


Warlock & Warlock::operator=(const Warlock & o)
{
	_name = o._name;
	_effects = o._effects;

	return (this);
}

		const std::string& Warlock::getName() const
		{
			return _name;
		}
		const std::string& Warlock::getEffects() const
		{
			return _effects;
		}