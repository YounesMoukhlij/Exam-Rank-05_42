

#pragma once

#include <iostream>
#include <ASpell.hpp>

class Fwoosh
{
	protected:
		std::string _name;
		std::string _effects;

	public:
		Fwoosh& operator=(const Fwoosh& origine);
		Fwoosh();
		~Fwoosh();


		virtual Fwoosh* clone() = 0;

		void	launch(const ATarget& target);

};


Fwoosh::Fwoosh() : ASpell("Fwoosh", "Fwooshed")
{

}

