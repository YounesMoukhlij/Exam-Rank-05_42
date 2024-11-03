
#pragma once 

#include <iostream>

class Warlock
{
private:
	std::string _name;
	std::string _title;

public:
	Warlock(/* args */);
	~Warlock();

	std::string& getName() const;
	std::string& getTitle() const;

	void	setTitle(const std::string )
};

Warlock::Warlock(/* args */)
{

}

Warlock::~Warlock()
{

}
