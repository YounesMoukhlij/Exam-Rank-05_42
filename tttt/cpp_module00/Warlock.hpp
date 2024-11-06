

#pragma once

#include <iostream>

class Warlock
{
	private:
		std::string _name;
		std::string _effects;
		Warlock& operator=(const Warlock& o);
	public:
		Warlock(const Warlock& o);
		Warlock(cons);

		const std::string& getName() const;
		const std::string& getEffects() const;

		~Warlock();
		Warlock();

		void	introduce () const;

		void	setTitle(const std::string& title);
}