
#pragma once

#include <iostream>

class ASpell
{
	private:
		ASpell();
		ASpell(const ASpell& o);
		ASpell& operator=(const ASpell& o);
		std::string	_name;
		std::string	_effects;
	public:
		ASpell(const std::string& name, const std::string&  effects);
		~ASpell();


		const std::string&    	getName() const;
		const std::string&	 	getEffects() const;


};

