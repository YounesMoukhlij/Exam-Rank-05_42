/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:20:09 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/19 14:11:09 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

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

void	Warlock::setTitle(const std::string& _title)
{
	title = _title;
}

void Warlock::learnSpell(ASpell* spell)
{
	if (spell)
	
		if (_SpellBook.find(spell->getName()) == _SpellBook.end())
			_SpellBook[spell->getName()] = spell->clone();
}

void Warlock::forgetSpell(std::string SpellName)
{
	if (_SpellBook.find(SpellName) != _SpellBook.end()) {
		delete _SpellBook[SpellName];	
		_SpellBook.erase(_SpellBook.find(SpellName));
	}
}

void Warlock::launchSpell(std::string SpellName, ATarget const & target)
{
	if (_SpellBook.find(SpellName) != _SpellBook.end())
		_SpellBook[SpellName]->launch(target);
}