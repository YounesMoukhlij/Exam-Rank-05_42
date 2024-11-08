#pragma once

#include <iostream> 
#include "ASpell.hpp"

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

		void	getHitBySpell(const ASpell& spell);
		virtual ATarget*  clone () const = 0;


};

