/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 18:54:51 by youmoukh          #+#    #+#             */
/*   Updated: 2024/11/03 18:59:26 by youmoukh         ###   ########.fr       */
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



void TargetGenerator::learnSpell(ATarget* spell)
{
	if (spell)
	{
		MAP[spell->getName()] = spell->clone();
	}
}
TargetGenerator::~TargetGenerator()
{

}
TargetGenerator::TargetGenerator(const TargetGenerator& origine)
{
	this = &origine;
}

TargetGenerator::TargetGenerator()
{

}



void TargetGenerator::forgetSpell(std::string const & str )
{
	std::map<std::string, ATarget * >::iterator it = MAP.find(str);
	if (it != Tar.end())
	{
		delete it->second;
		Tar.erase(it);
	}
}

		ASpell* TargetGenerator::createSpell(std::string const & str)
		{
			ASpell * t = 0;

			if (Tar.find(str) != Tar.end())
				t = Tar[str];
			return (t);
		}


TargetGenerator& TargetGenerator::operator=(const TargetGenerator& origine)
{
	Tar = origine._Tar;
	return *this;
}