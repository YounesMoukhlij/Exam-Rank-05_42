/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:48:26 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/17 15:50:13 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ASpell
{
	private:
		std::string name;
		std::string effect;
	public:
		ASpell();
		ASpell(const ASpell& origine);
		ASpell& operator=(const ASpell& origine);
		~ASpell();
};

