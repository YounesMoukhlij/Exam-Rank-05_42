

#include "ASpell.hpp"

class Polymorph : public ASpell
{
public:
	Polymorph();

	~Polymorph();
	ASpell* clone() const;

};

Polymorph::Polymorph(/* args */) : ASpell("Polymorph", "turned into a critter")
{
}

Polymorph::~Polymorph()
{
}

ASpell* Polymorph::clone() const
{
	return new Polymorph();
}