/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:20:11 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/19 14:52:48 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
	private:
		Warlock();
		Warlock(const Warlock& origine);
		Warlock& operator=(const Warlock& origine);
		std::map < std::string, ASpell * > Ope;
		std::string	name;
		std::string	title;
	public:
		Warlock(const std::string& _name, const std::string&  _title);
		~Warlock();


		const std::string&    	getName() const;
		const std::string&	 	getTitle() const;
		void					introduce() const;
		void					setTitle(const std::string& _title);
		
		void 					learnSpell(ASpell* spell);
		void 					forgetSpell(std::string SpellName);
		void 					launchSpell(std::string SpellName, ATarget const & target);

};