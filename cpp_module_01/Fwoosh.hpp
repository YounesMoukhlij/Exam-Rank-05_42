/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:04:04 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/19 13:28:36 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#inclu

class Fwoosh : public ASpell
{
	public :
		Fwoosh();
		~Fwoosh();
		ASpell* clone() const;
};