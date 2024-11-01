

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
		Opr[spell]->launch(target);
	}
}


