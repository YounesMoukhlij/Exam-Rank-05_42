

#include <iostream>

class ASpell
{
	protected :
		std::string _name;
		std::string _effects;
	public :
		~ASpell();
		ASpell();
		ASpell(const std::string& name, const std::string& effects);

		const std::string&	getName() const;
		const std::string&	getTitle() const;

		A
};