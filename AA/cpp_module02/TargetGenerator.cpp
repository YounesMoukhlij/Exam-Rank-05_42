
#include "TargetGenerator.hpp"


TargetGenerator::~TargetGenerator()
{

}



TargetGenerator::TargetGenerator(const TargetGenerator& o)
{
	*this = o;
}





TargetGenerator& TargetGenerator::operator=(const TargetGenerator& o)
{
	MAP = o.MAP;
	return (*this);
}



		void	TargetGenerator::learnTargetType(ATarget* spell)
		{
			if (spell)
			{
				if (MAP.find(spell->getT()) == MAP.end())
					MAP[spell->getT()] = spell->clone();
			}
		}
		void	TargetGenerator::forgetTargetType(std::string spell)
		{
				if (MAP.find(spell) != MAP.end())
				{
					delete MAP[spell];
					MAP.erase(MAP.find(spell));
				}


		}
		ATarget*	TargetGenerator::createTarget(std::string spell)
		{
			ATarget * t = 0;
			if (MAP.find(spell) != MAP.end())
			{
				t = MAP[spell];
			}
			return t;

		}