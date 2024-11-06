/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:20:09 by youmoukh          #+#    #+#             */
/*   Updated: 2024/11/06 16:06:26 by youmoukh         ###   ########.fr       */
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


		void	Warlock::learnSpell(ASpell* spell)
		{
			if (spell)
			{
				if (MAP.find(spell->getName()) == MAP.end())
				{
					MAP[spell->getName()] = spell->clone();
				}
			}
		}
		void	Warlock::forgetSpell(std::string spell)
		{
			if (MAP.find(spell) != MAP.end())
			{
				delete MAP[spell];
				MAP.erase(MAP.find(spell));
			}
		}
		void	Warlock::launchSpell(std::string spell, const ATarget& tar)
		{
			if (MAP.find(spell) != MAP.end())
			{
				MAP[spell]->launch(tar);
			}
		}