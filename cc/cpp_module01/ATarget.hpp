

#pragma once

#include "ASpell.hpp"



class ATarget
{
	protected:
		std::string _type;
	public:
		void getHitBySpell(const ASpell* spell);
		ATarget(const std::string& type);
		ATarget(const ATarget& origine);

		ATarget& operator=(const ATarget& origine);

		const std::string& getName() const;
		const std::string& getEffects() const;

		virtual ~ATarget();
		virtual	ATarget* clone () const = 0;
};