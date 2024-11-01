

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

		const std::string& getName();
		const std::string& getTitle();

};

Warlock::Warlock(/* args */)
{
}

Warlock::~Warlock()
{
}
