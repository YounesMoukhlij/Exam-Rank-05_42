/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:40:22 by youmoukh          #+#    #+#             */
/*   Updated: 2024/11/03 17:40:22 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Dummy.hpp"

Dummy::Dummy(): ATarget("Target Practice Dummy")
{

}

Dummy::~Dummy()
{



}


ATarget* Dummy::clone() const
{
	return new Dummy();
}