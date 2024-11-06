

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


ATarget::ATarget(const std::string& _name, const std::string& _title) : name(_name), title(_title)
{
	std::cout << _name << " : This looks like another boring day." << std::endl;
}

ATarget::~ATarget()
{
	std::cout << name << ": My job here is done!" << std::endl;
}

const std::string& 	ATarget::getName() const
{
	return (name);
}

const std::string& 	ATarget::getTitle() const
{
	return (title);	
}

void	ATarget::introduce() const
{
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
	
}

ATarget& ATarget::operator=(const ATarget& origine)
{
	this->name = origine.name;
	this->title = origine.title;
	return (*this);
}