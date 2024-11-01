#pragma once

#include <iostream>
#include <ATarget.hpp>

class ATarget
{
	protected:
		std::string _type;

	public:
		ATarget& operator=(const ATarget& origine);
		ATarget(const std::string& type);
		virtual ~ATarget();

		const std::string& getType() const;

		virtual ATarget* clone() = 0;
		void getHitBySpell(const ASpell& aspell);

};

void ATarget::getHitBySpell(const ASpell aspell)
{
	std::cout << _type << " has been " << aspell.getEffets() << "!" << std::endl;
}

