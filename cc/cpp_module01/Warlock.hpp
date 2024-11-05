

#pragma once

#include <iostream>
#include <map>

class Warlock
{
	private : 
		std::string _name;
		std::string _title;
		Warlock(const Warlock& origine);
		Warlock& operator=(const Warlock& origine);
		Warlock();
		std::map<std::string, ASpell *> MAP;
	public:
		~Warlock();
		Warlock(const std::string& name, const std::string& title);

		const std::string& getName() const;
		const std::string& getTitle() const;

		void	setTitle(const std::string& title);
		void	introduce() const;



		learnSpell(ASpell* )
		forgetSpell
		launchSpell



};


