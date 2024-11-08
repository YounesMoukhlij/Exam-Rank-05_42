#pragma once

#include <iostream>
#include "ASpell.hpp"
#include <map>

class Warlock
{
	private:
		Warlock();
		Warlock(const Warlock& origine);
		Warlock& operator=(const Warlock& origine);
		std::string	_name;
		std::string	_title;
		std::map<std::string, ASpell *> MAP;
	public:
		Warlock(const std::string& name, const std::string&  title);
		~Warlock();


		const std::string&    	getName() const;
		const std::string&	 	getTitle() const;
		void					introduce() const;
		void					setTitle(const std::string& title);

		void	learnSpell(ASpell * spell);
		void	forgetSpell(std::string spell);
		void	launchSpell(std::string spell, ATarget& tar);

};

		void	Warlock::learnSpell(ASpell * spell)
		{
			if (spell)
			{
				if (MAP.find(spell->getName()) == MAP.end())
					MAP[spell->getName()] == spell->clone();
			}
		}
		void	Warlock::forgetSpell(std::string spell)
		{
				if (MAP.find(spell) != MAP.end())
				{
					delete MAP[spell];
					MAP.erase(MAP.find(spell));
				}


		}
		void	Warlock::launchSpell(std::string spell, ATarget& tar)
		{
				if (MAP.find(spell) != MAP.end())
				{
					MAP[spell]->launch(tar);
				}

		}