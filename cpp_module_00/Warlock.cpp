/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:20:09 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/17 14:35:25 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string& _name, std::string& _title) : name(_name), title(_title)
{
	std::cout << _name << " : This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {}

std::string& const	Warlock::getName() const
{
	return (name);
}

std::string&	const 	Warlock::getTitle() const
{
	return (title);	
}

void	Warlock::introduce() const
{
	
}

Warlock::operator=()