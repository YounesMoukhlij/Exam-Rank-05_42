/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:03:35 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/19 14:48:35 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(std::string _type) : type(_type)
{

}

ATarget & ATarget::operator=(ATarget const & origine)
{
	type = origine.getType();
	return *this;
}

ATarget::ATarget(ATarget const & origine)
{
	*this = origine;
}

ATarget::~ATarget()
{

}

std::string ATarget::getType() const
{
	return (type);
}

void	ATarget::getHitBySpell(ASpell const & spell) const
{
	std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
}
