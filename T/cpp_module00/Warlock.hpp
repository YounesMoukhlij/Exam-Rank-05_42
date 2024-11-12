

#pragma once

#include <iostream>


class Warlock
{
	private:
		std::string _name;
		std::string _title;
	public:
		~Warlock();
		Warlock(const Warlock& origine);
		Warlock(const std::string& name, const std::string& title);

		Warlock& operator=(const Warlock& origine);

		const std::string& getName() const;
		const std::string& getTitle() const;

		void	setTitle(const std::string& title);
};


