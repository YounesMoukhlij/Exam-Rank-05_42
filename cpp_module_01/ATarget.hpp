/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:03:38 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/19 13:14:37 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ATarget
{
	private:
		std::string name;
		std::string effect;
	public:
		ATarget(const ATarget& origine);
		ATarget();
		ATarget(std::string _name, std:string _effects);
		ATarget& operator=(const ATarget& origine);
		virtual ~ATarget();
		const std::string getName() const;
		const std::string getEffects() const;
		virtual ATarget*  clone() = 0;
		
};