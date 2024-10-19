/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:48:29 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/19 13:36:25 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"



ASpell::~ASpell()
{
}

ASpell::ASpell(std::string _name, std:string _effects) : name(_name), effects(_effects)
{
	
}

ASpell::ASpell(const ASpell& origine)
{
	*this = origine;
}

const std::string ASpell::getName() const
{
	
}
const std::string getEffects() const
{
	return (effects)
}