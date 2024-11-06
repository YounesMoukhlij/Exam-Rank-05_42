


#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"


class Warlock
{
	private:
		Warlock();
		Warlock(const Warlock& origine);
		Warlock& operator=(const Warlock& origine);
		std::string	name;
		std::string	title;
		SpellBook MAP;
	public:
		Warlock(const std::string& _name, const std::string&  _title);
		~Warlock();


		const std::string&    	getName() const;
		const std::string&	 	getTitle() const;
		void					introduce() const;
		void					setTitle(const std::string& _title);

		void	learnSpell(ASpell* spell);
		void	forgetSpell(std::string spell);
		void	launchSpell(std::string spell, const ATarget& tar);

};