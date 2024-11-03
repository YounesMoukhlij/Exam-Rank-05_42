/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:39:52 by youmoukh          #+#    #+#             */
/*   Updated: 2024/11/03 17:39:52 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	protected :
		std::string _type;
	public :
		ATarget(const ATarget& origine);
		ATarget(const std::string& type);


		ATarget& operator=(const ATarget& origine);

		const std::string&	getType() const;

		virtual ~ATarget();
		virtual ATarget*  clone() const = 0 ;


		void getHitBySpell(const ASpell& spell) const;
};


