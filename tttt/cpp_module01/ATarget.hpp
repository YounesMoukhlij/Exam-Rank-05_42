

#pragma once


#include <iostream>
#include "ASpell.hpp"

class ASpell;


class ATarget
{
	protected:
		// ATarget();
		ATarget(const ATarget& origine);
		ATarget& operator=(const ATarget& origine);
		std::string	_type;
	public:
		ATarget(const std::string& type);
		virtual ~ATarget();


		const std::string&    	getType() const;



		virtual ATarget* clone () const = 0;


		void getHitBySpell(const ASpell& spell) c;

};
