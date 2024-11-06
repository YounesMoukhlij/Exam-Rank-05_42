

#include "ATarget.hpp"



void ATarget::getHitBySpell(const ASpell& spell)
{
	std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}


ATarget::ATarget(const std::string& type) : _type(type)
{

}

ATarget::~ATarget()
{

}
		ATarget::ATarget(const ATarget& origine)
		{
			*this = origine;
		}


const std::string&   ATarget::getType() const
{
	return _type;
}



ATarget& ATarget::operator=(const ATarget& origine)
{
	_type = origine._type;
	return ;
}


Warlock::Warlock(const std::string& _name, const std::string& _title) : name(_name), title(_title)
{
	std::cout << _name << " : This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!" << std::endl;
}

const std::string& 	Warlock::getName() const
{
	return (name);
}

const std::string& 	Warlock::getTitle() const
{
	return (title);	
}

void	Warlock::introduce() const
{
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
	
}

Warlock& Warlock::operator=(const Warlock& origine)
{
	this->name = origine.name;
	this->title = origine.title;
	return (*this);
}