/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:20:09 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/17 14:44:28 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string& _name, std::string& _title) : name(_name), title(_title)
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