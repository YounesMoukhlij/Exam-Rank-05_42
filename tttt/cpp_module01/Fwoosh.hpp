


#pragma once


#include <iostream>
#include "ATarget.hpp"
#include "A.hpp"


class ASpell
{
	protected:
		// ASpell();
		ASpell(const ASpell& origine);
		ASpell& operator=(const ASpell& origine);
		std::string	_name;
		std::string	_effects;
	public:
		ASpell(const std::string& name, const std::string&  effects);
		virtual ~ASpell();


		const std::string&    	getName() const;
		const std::string&	 	getEffects() const;



		virtual ASpell* clone () const = 0;

		void launch (const ATarget& target) const;


};


