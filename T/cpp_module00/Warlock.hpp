

#pragma once

#include <iostream>


class Warlock
{
	private:
		std::string _name;
		std::string _title;
		Warlock();
		Warlock(const Warlock& origine);
		Warlock& operator=(const Warlock& origine);
	public:
		~Warlock();
		Warlock(const std::string& name, const std::string& title);


		const std::string& getName() const;
		const std::string& getTitle() const;

		void	setTitle(const std::string& title);
};
		Warlock::~Warlock()
		{
			std::cout << _name << ": My job here is done!" << std::endl;
		}

		Warlock::Warlock(const Warlock& origine)
		{
			*this = origine;
		}
		Warlock::Warlock(const std::string& name, const std::string& title)
		{
			std::cout << _name << ": This looks like another boring day." 
		}

		Warlock& Warlock::operator=(const Warlock& origine);

		const std::string& Warlock::getName() const;
		const std::string& Warlock::getTitle() const;

		void	Warlock::setTitle(const std::string& title);


