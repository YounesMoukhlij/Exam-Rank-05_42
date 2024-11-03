

#include <iostream>

class ASpell
{
	protected :
		std::string _name;
		std::string _effects;
	public :
	
		const std::string&	getName() const;
		const std::string&	getTitle() const;
};