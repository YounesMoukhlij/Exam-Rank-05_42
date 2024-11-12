

#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"


class Warlock
{
	private:
		std::string _name;
		std::string _title;
		Warlock();
		Warlock(const Warlock& origine);
		Warlock& operator=(const Warlock& origine);
		std::map<std::string, ASpell *> MAP;
	public:
		~Warlock();
		Warlock(const std::string& name, const std::string& title);


		const std::string& getName() const;
		const std::string& getTitle() const ;

		void	setTitle(const std::string& title);
		void introduce() const;



		void learnSpell(ASpell* spell);
		void	forgetSpell(std::string spell);
		void	launchSpell(std::string spell);
};

		void Warlock::learnSpell(ASpell* spell)
		{
			if (spell)
			{
				if (MAP.find(spell->getName()) == MAP.end())
				{
					MAP[spell->getName()] = spell->clone();
				}
			}
		}
		void	Warlock::forgetSpell(std::string spell)
		{
			if (MAP.find(spell->getName()) != MAP.end())
			{
				delete MAP[spell];
				MAP.erase(M)
			}
		}
		void	Warlock::launchSpell(std::string spell);


