


#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"



class SpellBook
{
	private:
		SpellBook();
		SpellBook(const SpellBook& origine);
		SpellBook& operator=(const SpellBook& origine);

		std::map<std::string , ASpell *> MAP;
	public:

		~SpellBook();


		const std::string&    	getName() const;
		const std::string&	 	getTitle() const;
		void					introduce() const;
		void					setTitle(const std::string& _title);

		void	learnSpell(ASpell* spell);
		void	forgetSpell(const std::string& spell);
		ASpell*	createSpell(std::string& spell);

};

		void	learnSpell(ASpell* spell);
		void	forgetSpell(const std::string& spell);
		ASpell*	createSpell(std::string& spell);