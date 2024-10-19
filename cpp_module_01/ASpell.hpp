/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:48:26 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/19 14:15:45 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iostream>

cl
class ASpell
{
	protected:
		std::string name;
		std::string effects;
	public:
		ASpell(const ASpell& origine);
		ASpell(std::string _name, std::string _effects);
		ASpell& operator=(const ASpell& origine);
		virtual ~ASpell();
		
		std::string getName() const;
		std::string getEffects() const;
		void 		launch(ATarget const & target) const;
		
		
		virtual ASpell*  clone() = 0;
};

