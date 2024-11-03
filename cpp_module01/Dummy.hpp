/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:39:56 by youmoukh          #+#    #+#             */
/*   Updated: 2024/11/03 17:39:56 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>

#include "ATarget.hpp"

class Dummy : public ATarget
{
	public :
		Dummy();
		~Dummy();
		ATarget* clone () const;
};