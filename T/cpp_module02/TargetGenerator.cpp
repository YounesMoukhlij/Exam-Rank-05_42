#include "TargetGenerator.hpp"



		void TargetGenerator::learnTargetType(ATarget* tar)
		{
			
			if (tar)
			{
				if (MAP.find(tar->getType()) == MAP.end())
				{
					MAP[tar->getType()] = tar->clone();
				}
			}
		}
		void	TargetGenerator::forgetTargetType(std::string& tar)
		{
			if (MAP.find(tar) != MAP.end())
			{
				delete MAP[tar];
				MAP.erase(MAP.find(tar));
			}
		}
		ATarget*	TargetGenerator::createTarget(std::string& tar)
		{
			ATarget * t = 0;
			if (MAP.find(tar) != MAP.end())
			{
				t = MAP[tar];
			}
			return t;
		}

		TargetGenerator::~TargetGenerator()
		{

		}

		TargetGenerator::TargetGenerator(const TargetGenerator& origine)
		{
			*this = origine;
		}
		TargetGenerator::TargetGenerator()
		{}

		TargetGenerator& TargetGenerator::operator=(const TargetGenerator& origine)
		{
			MAP = origine.MAP;
			return (*this);
		}