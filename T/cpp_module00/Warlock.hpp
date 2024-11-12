

#pragma once

#include <iostream>


class Warlock
{
	private:
		std::string _name;
		std::string _title;
	public:
		~Warlock();
		Warlock(const std::string& name, const std::string& title);

		Warlock& operator=(const Warlock& origine);
}