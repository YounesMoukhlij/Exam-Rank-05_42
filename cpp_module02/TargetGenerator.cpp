

#include "TargetGenerator.hpp"



void TargetGenerator::learnSpell(ATarget* tar)
{
	if (tar)
	{
		Tar[tar->getType()] = tar;
	}
}
TargetGenerator::~TargetGenerator()
{

}
TargetGenerator::TargetGenerator(const TargetGenerator& origine)
{
	*this = origine;
}

TargetGenerator::TargetGenerator()
{

}



void TargetGenerator::forgetSpell(std::string const & str )
{

	if (Tar.find (str) != Tar.end())
	{
		delete it->second;
		Tar.erase(it);
	}
}

		ASpell* TargetGenerator::createSpell(std::string const & str)
		{
			ASpell * t = 0;

			if (Tar.find(str) != Tar.end())
				t = Tar[str];
			return (t);
		}


TargetGenerator& TargetGenerator::operator=(const TargetGenerator& origine)
{
	Tar = origine.Tar;
	return *this;
}