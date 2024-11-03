
#pragma once 

#include <iostream>

class Warlock
{
	private:
		std::string _name;
		std::string _title;
		Warlock& operator=(const Warlock& origine);

	public:

		// Warlock();
		// Warlock(const Warlock& origine);
		Warlock(const std::string& name, const std::string& title);
		~Warlock();

		const std::string&	getName() const;
		const std::string&	getTitle() const;

		void				setTitle(const std::string& title);
		void				introduce() const;


	
};



