#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	protected:
		std::string _type;

	public:
		ATarget& operator=(const ATarget& origine);
		ATarget(const std::string& type);
		virtual ~ATarget();

		const std::string& getType() const;

		void getHitBySpell(const ASpell & aspell) const ;
		virtual ATarget* clone() const = 0;

};

