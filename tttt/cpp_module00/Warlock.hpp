

#pragma once

#include <iostream>

class Warlock
{
	private:
		std::string _name;
		std::string _effects;
		Warlock& operator=(const Warlock& o);
		Warlock(const Warlock& o);

	public:
		Warlock(const std::string& name, const std::string& title);

		const std::string& getName() const;
		const std::string& getEffects() const;

		~Warlock();

		void	introduce () const;

		void	setTitle(const std::string& title);
};


