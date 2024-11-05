

#pragma once

#include "ASpell.hpp"



class ATarget
{
	protected:
		std::string _type;
	public:
		void getHitBySpell(const ASpell* spell);

		ATarget(const std::string& type);
		ATarget(const ATarget& origine);

		ATarget& operator=(const ATarget& origine);

		const std::string& getType() const;

		virtual ~ATarget();
		virtual	ATarget* clone () const = 0;
};


#include "ASpell.hpp"

ASpell::ASpell(const ASpell& origine)
{
	*this = origine;
}


		ASpell::ASpell(const std::string& name, const std::string& effects) : _name(name), _effects(effects)
		{

		}

		ASpell& ASpell::operator=(const ASpell& origine)
		{
			_name = origine._name;
			_effects = origine._effects;
			return *this;
		}


		ASpell::~ASpell()
		{

		}



		const std::string& ASpell::getName() const
		{
			return _name;
		}
		const std::string& ASpell::getEffects() const
		{
			return _effects;
		}