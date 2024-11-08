
#pragma once

#include <iostream>

class ASpell
{
	private:
		ASpell();
		ASpell(const ASpell& origine);
		ASpell& operator=(const ASpell& origine);
		std::string	_name;
		std::string	_titl;
	public:
		ASpell(const std::string& name, const std::string&  effects);
		~ASpell();


		const std::string&    	getName() const;
		const std::string&	 	getEffects() const;


};