

#include <iostream>

class ASpell
{
	protected :
		std::string _name;
		std::string _effects;
	public :
		ASpell(const std::string& name, const std::string& effects);

		ASpell& operator=(const ASpell& origine);
		ASpell(const ASpell& origine);

		const std::string&	getName() const;
		const std::string&	getTitle() const;

		virtual ~ASpell();
		ASpell* virtual clone() const = 0 ;
};
