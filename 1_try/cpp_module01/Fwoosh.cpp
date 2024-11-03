
#i

Fwoosh::Fwoosh(): ASpell("Fwoosh" ,"fwooshed")
{

}

Fwoosh::~Fwoosh()
{



}


ASpell* Fwoosh::clone()
{
	return new(Fwoosh);
}