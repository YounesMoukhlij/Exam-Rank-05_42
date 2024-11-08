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
		ATarget(const std::string& name, const std::string&  effects);
		virtual ~ATarget();


		const std::string&    	getName() const;

		void	getHitBySpell(const ASpell& spell);
		virtual ATarget*  clone () const = 0;


};

