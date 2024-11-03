/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 18:54:51 by youmoukh          #+#    #+#             */
/*   Updated: 2024/11/03 18:57:32 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#pragma once 

#include <iostream>


class TargetGenerator
{
	publi	
};

class SpellBook
{
	private :
		SpellBook(const SpellBook& origine);
		SpellBook& operator=(const SpellBook& origine);
		std::map<std::string, ASpell* > MAP;
	public:
		void learnSpell(ASpell* spell);
		void forgetSpell(std::string const & str);
		ASpell* createSpell(std::string const & str);


		~SpellBook();
		SpellBook();
};