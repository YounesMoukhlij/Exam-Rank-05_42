

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


#include "ATarget.hpp"

ATarget::ATarget(const ATarget& origine)
{
	*this = origine;
}


		ATarget::ATarget(const std::string& type) : _type(type)
		{

		}

		ATarget& ATarget::operator=(const ATarget& origine)
		{
			_type = origine._type;
			return *this;
		}


		ATarget::~ATarget()
		{

		}



		const std::string& ATarget::getType() const
		{
			return _type;
		}

		void ATarget::getHitBySpell(const ASpell* spell)
		{
			std::cout << _type << " has been "<< spell.getEffects() << "!" << std::endl;
		}
