#include "ASpell.hpp"

		ASpell::~ASpell()
		{
			std::cout << _name << ": My job here is done!" << std::endl;
		}

		ASpell::ASpell(const ASpell& origine)
		{
			*this = origine;
		}
		ASpell::ASpell(const std::string& name, const std::string& title) : _name (name), _title(title)
		{
			std::cout << _name << ": This looks like another boring day." << std::endl;
		}

		ASpell& ASpell::operator=(const ASpell& origine)
		{
			_name = origine._name;
			_title = origine._title;
			return (*this);
		}

		const std::string& ASpell::getName() const
		{
			return _name;
		}
		const std::string& ASpell::getTitle() const
		{
			return _title;
		}