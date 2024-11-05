

#pragma once

#include 

class ATarget
{
	protected:
		std::string _type;
	public:
		void getHitBySpell(const ASpell* spell);
};