/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:39:58 by youmoukh          #+#    #+#             */
/*   Updated: 2024/11/03 17:39:58 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>

#include "ASpell.hpp"

class Fwoosh : public ASpell
{
	public :
		Fwoosh();
		~Fwoosh();
		ASpell* clone () const;
};
