

#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>



class SpellBook
{
	private:
		SpellBook();
		SpellBook(const SpellBook& origine);
		SpellBook& operator=(const SpellBook& origine);
		std::map<std::string, ASpell *> MAP;
	public:
		SpellBook(const std::string& name, const std::string&  title);
		~SpellBook();


		const std::string&    	getName() const;
		const std::string&	 	getTitle() const;
		void					introduce() const;
		void					setTitle(const std::string& title);

		void	learnSpell(ASpell * spell);
		void	forgetSpell(std::string& spell);
		void	createSpell(std::string& spell);

};