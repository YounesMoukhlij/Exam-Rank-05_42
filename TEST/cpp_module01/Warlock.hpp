

#pragma once

#include <iostream>
#include <map>

#include "ASpell.cpp"
#include "ATarget.cpp"

class ASpell;
class ATarget;


class Warlock
{
	private:
		std::map < std::string, ASpell * > Opr;
		std::string _name;
		std::string _title;
	public:
		Warlock& operator=(const Warlock& origine);
		Warlock(const std::string& name, const std::string& title);
		~Warlock();

		const std::string& getName() const;
		const std::string& getTitle() const;
		void introduce() const;

		void	setTitle(const std::string& title);
		void	learnSpell(ASpell* spell);
		void	forgetSpell(std::string spell);
		void	launchSpell(std::string spell, ATarget& const target);

};




