
#pragma once


#include "ATarget.hpp"

class Dummy
{
	public:
		Dummy();
		 ~Dummy();
		 ATarget*  clone () const;


};

Dummy::Dummy() : ATarget("Target Practice Dummy")
{

}
		 Dummy::~Dummy()
		 {

		 }

		 ATarget*  Dummy::clone () const
		 {
			return new Dummy();
		 }