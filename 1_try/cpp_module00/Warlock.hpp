
#pragma once 

#include <iostream>

class Warlock
{
private:
	std::string _name;
	std::string _title;

public:
	Warlock(const std::string& name, ;
	~Warlock();

	std::string& getName() const;
	std::string& getTitle() const;

	void	setTitle(const std::string& title);
};

Warlock::Warlock(/* args */)
{

}

Warlock::~Warlock()
{

}
