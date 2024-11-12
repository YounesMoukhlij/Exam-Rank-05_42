

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


		const std::string& getName() ;
		const std::string& getTitle() ;

		void	setTitle(const std::string& title);
		void introduce() const;
};



