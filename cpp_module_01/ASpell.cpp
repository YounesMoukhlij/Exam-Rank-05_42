/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:48:29 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/19 15:01:33 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"



ASpell::~ASpell()
{
}

ASpell::ASpell(std::string _name, std::string _effects) : name(_name), effects(_effects)
{
	
}

ASpell::ASpell(const ASpell& origine)
{
	*this = origine;
}

std::string ASpell::getName() const
{
	return (name);
}

std::string ASpell::getEffects() const
{
	return (effects);
}

void ASpell::launch(ATarget const & target) const
{
	target.getHitBySpell(*this);
}

ASpell& ASpell::operator=(const ASpell& origine)
{
	this = 
}
