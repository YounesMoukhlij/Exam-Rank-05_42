/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:19:27 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/19 15:22:15 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"

/*
	The main in subject :
*/

int main()
{
  	Warlock richard("Richard", "the Titled");
	
  	Dummy bob;
  	Fwoosh* fwoosh = new Fwoosh();
	
  	// richard.learnSpell(fwoosh);
	
  	// richard.introduce();
  	// richard.launchSpell("Fwoosh", bob);
	
  	// richard.forgetSpell("Fwoosh");
  	// richard.launchSpell("Fwoosh", bob);
	return (0);
}