/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:39:43 by youmoukh          #+#    #+#             */
/*   Updated: 2024/11/03 17:39:43 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ASpell.hpp"


ASpell::ASpell(const std::string& name, const std::string& effects) : _name(name), _effects(effects)
{

}

ASpell::~ASpell()
{

}

		ASpell::ASpell(const ASpell& origine)
		{
			*this = origine;
		}




void ASpell::launch(const ATarget& target) const
{
	target.getHitBySpell(*this);
}


const std::string& ASpell::getName() const
{
	return _name;
}
const std::string& ASpell::getEffects() const
{
	return _effects;
}

ASpell& ASpell::operator=(const ASpell& origine)
{
		_name = origine._name;
		_effects = origine._effects;
	return *this;
}