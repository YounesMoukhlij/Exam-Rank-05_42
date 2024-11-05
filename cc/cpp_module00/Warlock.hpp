

#pragma once

#include <iostream>

class Warlock
{
	private : 
		std::string _name;
		std::string _title;
	public:
		Warlock(const std::string& name, const std::string& title);
		~Warlock();
		Warlock(const Warlock& origine);
		Warlock(const Warlock& origine);
};