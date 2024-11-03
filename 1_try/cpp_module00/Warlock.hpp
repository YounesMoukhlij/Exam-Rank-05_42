
#pragma once 

#include <iostream>

class Warlock
{
private:
	std::string _name;
	std::string _title;
	Warlock& operator=(const Warlock& origine);
	Warlock();
	Warlock(const Warlock& origine);

public:

	Warlock(const std::string& name, const std::string& title);
	~Warlock();

	std::string& getName() const;
	std::string& getTitle() const;

	void	setTitle(const std::string& title);
};

Warlock::Warlock()
{

}

Warlock::~Warlock()
{

}
