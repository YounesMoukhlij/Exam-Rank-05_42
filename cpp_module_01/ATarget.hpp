/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:03:38 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/19 13:24:48 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "ASpell.hpp"

class ASpell;


class ATarget
{
	protected:
		std::string type;
	public:
		ATarget(const ATarget& origine);
		ATarget(std::string _type);
		ATarget& operator=(const ATarget& origine);
		virtual ~ATarget();
		
		 std::string& getType() const;
		
		virtual ATarget*  clone() const = 0;
		void getHitBySpell(const ASpell& aspell) const;
		
};