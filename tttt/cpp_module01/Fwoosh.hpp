


#pragma once


#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"


class Fwoosh
{
		Fwoosh();
	public:
		Fwoosh(const std::string& name, const std::string&  effects);
		virtual ~Fwoosh();


		const std::string&    	getName() const;
		const std::string&	 	getEffects() const;


		ASpell* clone () const;



};


