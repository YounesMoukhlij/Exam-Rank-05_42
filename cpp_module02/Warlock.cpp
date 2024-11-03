/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:40:12 by youmoukh          #+#    #+#             */
/*   Updated: 2024/11/03 19:11:26 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Warlock.hpp"

Warlock::Warlock(const std::string& name, const std::string& title) : _name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done!" << std::endl;
}

const std::string&   Warlock::getName() const
{
	return _name;
}

const std::string&  Warlock::getTitle() const
{
	return _title;
}

void	Warlock::setTitle(const std::string& title)
{
	_title = title;
}



void Warlock::introduce() const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

Warlock& Warlock::operator=(const Warlock& origine)
{
		_name = origine._name;
		_title = origine._title;
	return *this;
}


void	Warlock::learnSpell(ASpell* spell)
{
	MAP.learnSpell(spell);
}


void	Warlock::forgetSpell(std::string spell)

{
	MAP.forgetSpell(spell);

}

void	Warlock::launchSpell(std::string spell, const ATarget& target)
{
	if (MAP.creat)
	MAP.createSpell(spell)->launch(target);
}