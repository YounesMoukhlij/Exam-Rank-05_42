


#include "BrickWall.hpp"

ATar* BrickWall::clone () const
{
	return new BrickWall();
}

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall")
{

}

BrickWall::~BrickWall()
{

}