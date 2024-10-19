/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:04:21 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/19 14:14:22 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "ASpell.hpp"
#include "ATarget.hpp"

class Dummy : public ASpell
{
	public :
		Dummy();
		~Dummy();
		ASpell* clone() const;
};