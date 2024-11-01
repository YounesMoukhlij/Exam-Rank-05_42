

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


void	Warlock::learnSpell(ASpell *spell)
{
	if (spell)
	{
		if (Opr.find(spell->getName()) == Opr.end())
		{
			Opr[spell->getName()] = spell->clone();
		}
	}
}

void	Warlock::forgetSpell(std::string spell)
{
	if (Opr.find(spell) != Opr.end())
	{
		delete Opr[spell];
		Opr.erase(Opr.find(spell));
	}
}

void	Warlock::launchSpell(std::string spell, ATarget& const target)
{
	if (Opr.find(spell) != Opr.end())
	{
		Opr[sp]
	}
}


* learnSpell, takes a pointer to ASpell, that makes the Warlock learn a spell
* forgetSpell, takes a string corresponding a to a spell's name, and makes the
  Warlock forget it. If it's not a known spell, does nothing.
* launchSpell, takes a string (a spell name) and a reference to ATarget, that
  launches the spell on the selected target. If it's not a known spell, does
  nothing.

You will need a new attribute to store the spells your Warlock knows. Several
types fit the bill, it's up to you to choose the best one.