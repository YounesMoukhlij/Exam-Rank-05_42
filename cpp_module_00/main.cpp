/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:19:27 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/17 14:55:03 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"


/*
*/
int main()
{
  	Warlock const richard("Richard", "Mistress of Magma");
  	richard.introduce();
  	std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;
	
  	Warlock* jack = new Warlock("Jack", "the Long");
  	jack->introduce();
  	jack->setTitle("the Mighty");
  	jack->introduce();
	
  	delete jack;
	
  	return (0);
}