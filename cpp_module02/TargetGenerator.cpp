

#include "TargetGenerator.hpp"



void TargetGenerator::learnSpell(ATarget* tar)
{
	if (tar)
	{
		Tar[tar->getName()] = tar->clone();
	}
}
TargetGenerator::~TargetGenerator()
{

}
TargetGenerator::TargetGenerator(const TargetGenerator& origine)
{
	this = &origine;
}

TargetGenerator::TargetGenerator()
{

}



void TargetGenerator::forgetSpell(std::string const & str )
{
	std::map<std::string, ATarget * >::iterator it = MAP.find(str);
	if (it != Tar.end())
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
	Tar = origine._Tar;
	return *this;
}