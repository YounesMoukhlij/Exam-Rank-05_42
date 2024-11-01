

#include "ASpell.hpp"

ASpell::ASpell(const std::string& name, const std::string& title) : _name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

ASpell::~ASpell()
{
	std::cout << _name  << ": My job here is done!" << std::endl;
}


void ASpell::introduce() const
{
	std::cout << _name << ": I am " << _name << ", "  << _title << "!" << std::endl;
}

		ASpell&  ASpell::operator=(const ASpell& origine)
		{
			if (this != &origine)
			{
				_title = origine._title;
				_name = origine._name;
			}
			return (*this);
		}



const std::string& ASpell::getName() const
{
	return _name;
}
const std::string& ASpell::getEffects() const
{
	return _title;
}
