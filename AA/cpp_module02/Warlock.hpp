#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "SpellBook.hpp"
#include "ATarget.hpp"




class Warlock
{
	private:
		Warlock();
		Warlock(const Warlock& origine);
		Warlock& operator=(const Warlock& origine);
		std::string	_name;
		std::string	_title;
		SpellB
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

