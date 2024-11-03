/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 18:54:51 by youmoukh          #+#    #+#             */
/*   Updated: 2024/11/03 18:58:38 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#pragma once 

#include <iostream>



class TargetGenerator
{
	private :
		TargetGenerator(const TargetGenerator& origine);
		TargetGenerator& operator=(const TargetGenerator& origine);
		std::map<std::string, ATarget* > Tar;
	public:
		void learnTargetType(ATarget*);
		void forgetTargetType(string const &);
		ATarget* createTarget(string const &);


		~TargetGenerator();
		TargetGenerator();
};



void SpellBook::learnSpell(ASpell* spell)
{
	if (spell)
	{
		MAP[spell->getName()] = spell->clone();
	}
}
SpellBook::~SpellBook()
{

}
SpellBook::SpellBook(const SpellBook& origine)
{
	this = &origine;
}

SpellBook::SpellBook()
{

}



void SpellBook::forgetSpell(std::string const & str )
{
	std::map<std::string, ASpell * >::iterator it = MAP.find(str);
	if (it != MAP.end())
	{
		delete it->second;
		MAP.erase(it);
	}
}

		ASpell* SpellBook::createSpell(std::string const & str)
		{
			ASpell * t = 0;

			if (MAP.find(str) != MAP.end())
				t = MAP[str];
			return (t);
		}


SpellBook& SpellBook::operator=(const SpellBook& origine)
{
	MAP = origine._MAP;
	return *this;
}