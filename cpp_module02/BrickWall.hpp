
#pragma once

#include "ATarget.hpp"


class BrickWall : public ATarget
{
public:
	BrickWall(/* args */);
	~BrickWall();

};

BrickWall::BrickWall(/* args */) : ATarget("Inconspicuous Red-brick Wall");
{
}

BrickWall::~BrickWall()
{
}
