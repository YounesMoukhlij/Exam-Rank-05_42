


#include "BrickWall.hpp"

ASpell* BrickWall::clone () const
{
	return new BrickWall();
}

BrickWall::BrickWall() : ATarget("BrickWall", "BrickWalled")
{

}

BrickWall::~BrickWall()
{

}