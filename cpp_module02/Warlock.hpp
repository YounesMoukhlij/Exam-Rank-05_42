/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:40:15 by youmoukh          #+#    #+#             */
/*   Updated: 2024/11/03 18:53:27 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#pragma once 

#include <iostream>
#include <map>

#include "ASpell.hpp"
#include "SpellBook.hpp"

class ASpell;
class SpellBook;

class Warlock
{
	private:
		SpellBook spell
		std::map <std::string, ASpell *> MAP; 
		std::string _name;
		std::string _title;
		Warlock& operator=(const Warlock& origine);

		Warlock();
		Warlock(const Warlock& origine);
	public:

		Warlock(const std::string& name, const std::string& title);
		~Warlock();

		const std::string&	getName() const;
		const std::string&	getTitle() const;

		void				setTitle(const std::string& title);
		void				introduce() const;

		void	learnSpell(ASpell* spell);
		void	forgetSpell(std::string spell);
		void	launchSpell(std::string spell, const ATarget& target);



	
};

