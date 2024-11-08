

#pragma once


#include "ASpell.hpp"

class ASpell
{
	private:
		ASpell(const ASpell& o);
		ASpell& operator=(const ASpell& o);
		std::string	_name;
		std::string	_effects;
	public:
		ASpell();
		virtual ~ASpell();


		const std::string&    	getName() const;
		const std::string&	 	getEffects() const;

		virtual ASpell*  clone () const = 0;


};