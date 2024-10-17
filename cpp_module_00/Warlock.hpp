/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:20:11 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/17 14:37:44 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Warlock
{
	private:
		Warlock();
		Warlock(const Warlock& origine);
		Warlock& operator=(const Warlock& origine);
		std::string	name;
		std::string	title;
	public:
		Warlock(std::string& _name, std::string& _title);
		~Warlock();


		std::string&    const	getName() const;
		std::string&	const 	getTitle() const;
		void	introduce() const;
};