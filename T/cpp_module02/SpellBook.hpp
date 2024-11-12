#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "SpellBook.hpp"
#include "ATarget.hpp"

class ASpell;



class SpellBook
{
	private:
		std::string _name;
		std::string _title;
		SpellBook();
		SpellBook(const SpellBook& origine);
		SpellBook& operator=(const SpellBook& origine);
		std::map<std::string, ASpell MAP;
	public:
		~SpellBook();
		SpellBook(const std::string& name, const std::string& title);


		const std::string& getName() const;
		const std::string& getTitle() const ;

		void	setTitle(const std::string& title);
		void introduce() const;



		void learnSpell(ASpell* spell);
		void	forgetSpell(std::string& spell);
		ASpell*	createSpell(std::string& spell);
};
