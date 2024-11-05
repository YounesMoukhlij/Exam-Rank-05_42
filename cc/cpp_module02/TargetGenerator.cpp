
#include "TargetGenerator.hpp"

		void TargetGenerator::learnTargetType(ATarget* target)
		{
			if (target)
			{
				MAP[target->getType()] = target;
			}
		}

		void TargetGenerator::forgetTargetType(std::string& target)
		{
			if (MAP.find(target) != MAP.end())
			{
				MAP.erase(find(target));
			}
		}
		ATarget* TargetGenerator::createTarget(std::string& target)
		{
			ATarget *u;

			if (MAP.find(target) != MAP.end())
			{
				u = MAP[target];
			}
			return u;
		}

		TargetGenerator::TargetGenerator(const TargetGenerator& origine)
{
	*this = origine;
}



		TargetGenerator& TargetGenerator::operator=(const TargetGenerator& origine)
		{
			MAP = origine.MAP;
			return *this;
		}


		TargetGenerator::~TargetGenerator()
		{

		}