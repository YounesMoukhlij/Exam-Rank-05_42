

#pragma once

#include <iostream>

class Warlock
{
	private:
		std::string _name;
		std::string _effects;
	public:
		Warlock& operator=(const Warlock& o);
		Warlock(const Warlock& o);

		const std::string& getName() const;
		const std::string& getEffects() const;

		~Warlock();
		Warlock();

		void	introduce () const;

		void	setTitle(const std::string& title);
}