/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:40:18 by youmoukh          #+#    #+#             */
/*   Updated: 2024/11/03 17:40:18 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fwoosh.hpp"

Fwoosh::Fwoosh(): ASpell("Fwoosh" ,"fwooshed")
{

}

Fwoosh::~Fwoosh()
{



}


ASpell* Fwoosh::clone() const
{
	return new Fwoosh();
}