
#pragma once 

#include <iostream>
#include <map>

#include "ASpell.hpp"

class ASpell;

class Warlock
{
	private:
		std::map <std::string, ASpell *> MAP; 
		std::string _name;
		std::string _title;
		Warlock& operator=(const Warlock& origine);

		Warlock();
		Warlock(const Warlock& origine);
	public:

		Warlock(const std::string& name, const std::string& title);
		~Warlock();

		const std::string&	getName() const;
		const std::string&	getTitle() const;

		void				setTitle(const std::string& title);
		void				introduce() const;

		void	learnSpell(ASpell* spell);

	
};

void	Warlock::learnSpell(ASpell* spell)
{
}


