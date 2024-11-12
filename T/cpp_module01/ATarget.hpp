#pragma once

#include <iostream>
#include "ASpell.hpp"



class ASpell;


class ATarget
{
	private:
		std::string _type;
		ATarget(const ATarget& origine);
		ATarget& operator=(const ATarget& origine);
	public:
		ATarget();
		~ATarget();
		ATarget(const std::string& type);



		const std::string& getType() const ;

		void getHitBySpell(const ASpell& spell) const;

};
