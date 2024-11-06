
#pragma once


#include <iostream>


class ASpell
{
	protected:
		// ASpell();
		ASpell(const ASpell& origine);
		ASpell& operator=(const ASpell& origine);
		std::string	_name;
		std::string	_effects;
	public:
		ASpell(const std::string& name, const std::string&  effects);
		virtual ~ASpell();


		const std::string&    	getName() const;
		const std::string&	 	getEffects() const;



		virtual ASpell* clone () const = 0;

		void launch (const ATarget& target) const;


};
		void ASpell::launch (const ATarget& target) const
		{
			
		}


ASpell::ASpell(const std::string& name, const std::string& title) : _name(name), _effects(effects)
{

}

ASpell::~ASpell()
{

}

const std::string&   ASpell::getName() const
{
	return _name;
}

const std::string&  ASpell::getEffects() const
{
	return _effects;
}



ASpell& ASpell::operator=(const ASpell& origine)
{
		_name = origine._name;
		_effects = origine._effects;
	return *this;
}