




#pragma once


#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"


class BrickWall : public ATarget
{
	public:
		BrickWall();
		~BrickWall();
		ATarget* clone () const;



};


#include "BrickWall.hpp"

ATarget* BrickWall::clone () const
{
	return new BrickWall();
}


BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall")
{

}

BrickWall::~BrickWall()
{

}