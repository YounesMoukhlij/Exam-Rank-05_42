

#include "Dummy.hpp"

Dummy::Dummy(): ASpell("Dummy" ,"Dummyed")
{

}

Dummy::~Dummy()
{



}


ASpell* Dummy::clone()
{
	return new(Dummy);
}