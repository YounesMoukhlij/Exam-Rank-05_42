

#include <iostream>

class ASpell
{
	protected :
		std::string _name;
		std::string _effects;
	public :
		~ASpell();
		ASpell();
		Warlock(const std::string& name, const std::string& title);

		const std::string&	getName() const;
		const std::string&	getTitle() const;
};