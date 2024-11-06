


#pragma once


#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"


class Fwoosh
{
	protected:
		// Fwoosh();
		Fwoosh(const Fwoosh& origine);
		Fwoosh& operator=(const Fwoosh& origine);
		std::string	_name;
		std::string	_effects;
	public:
		Fwoosh(const std::string& name, const std::string&  effects);
		virtual ~Fwoosh();


		const std::string&    	getName() const;
		const std::string&	 	getEffects() const;



		virtual ASpell* clone () const;

		void launch (const ATarget& target) const;


};


