#pragma once

#include <iostream>


class ATarget
{
	protected:
		std::string _type;

	public:
		ATarget& operator=(const ATarget& origine);
		ATarget(const std::string& name, const std::string& effects);
		virtual ~ATarget();

		const std::string& getName() const;
		const std::string& getType() const;

		virtual ATarget* clone() = 0;
		vgetHitBySpell(const ASpell& aspell);

};