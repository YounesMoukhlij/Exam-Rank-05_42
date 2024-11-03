

#include "Dummy.hpp"

Dummy::Dummy(): ASpell("Dummy" ,"Dummyed")
{

}

Dummy::~Dummy()
{



}


ATarget* Dummy::clone()
{
	return new(Dummy);
}