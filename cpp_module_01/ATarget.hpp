/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:03:38 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/19 13:14:29 by youmoukh         ###   ########.fr       */
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
		ASpell(const ASpell& origine);
		ASpell();
		ASpell(std::string _name, std:string _effects);
		ASpell& operator=(const ASpell& origine);
		virtual ~ASpell();
		const std::string getName() const;
		const std::string getEffects() const;
		virtual ASpell*  clone() = 0;
		
};