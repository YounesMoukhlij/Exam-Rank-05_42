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
		void getHitBySpell(const ASpell& aspell);

};

getHitBySpell(const ASpell aspell)
{
	std::cout << _type << " has been " << aspell._effects << "!" << std::endl;
}

<TYPE> has been <EFFECTS>!