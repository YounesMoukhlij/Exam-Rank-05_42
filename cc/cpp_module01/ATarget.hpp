

#pragma once

#include "ASpell.hpp"



class ATarget
{
	protected:
		std::string _type;
	public:
		void getHitBySpell(const ASpell* spell);
		ASpell(const std::string& type);
		ASpell(const ASpell& origine);

		ASpell& operator=(const ASpell& origine);

		const std::string& getName() const;
		const std::string& getEffects() const;

		virtual ~ASpell();
		virtual	ASpell* clone () const = 0;
};