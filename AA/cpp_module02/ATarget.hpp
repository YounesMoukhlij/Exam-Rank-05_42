#pragma once

#include <iostream> 
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	private:
		ATarget();
		ATarget(const ATarget& o);
		ATarget& operator=(const ATarget& o);
		std::string	_type;
	public:
		ATarget(const std::string& type);
		virtual ~ATarget();


		const std::string&    	getType() const;

		void	getHitBySpell(const ASpell& spell) const;
		virtual ATarget*  clone () const = 0;


};

