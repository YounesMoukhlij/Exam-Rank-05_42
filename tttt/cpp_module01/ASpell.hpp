
#pragma once


#include <iostream>


class ASpell
{
	private:
		ASpell();
		ASpell(const ASpell& origine);
		ASpell& operator=(const ASpell& origine);
		std::string	name;
		std::string	effects;
	public:
		ASpell(const std::string& _name, const std::string&  _effects);
		~ASpell();


		const std::string&    	getName() const;
		const std::string&	 	getEffects() const;


		void					setTitle(const std::string& _title);

};