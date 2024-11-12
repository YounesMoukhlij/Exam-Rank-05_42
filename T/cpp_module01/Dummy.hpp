#pragma once

#include <iostream>


class Dummy : public ATarget
{
	public:
		Dummy();
		~Dummy();
		ATarget* clone() const;

};