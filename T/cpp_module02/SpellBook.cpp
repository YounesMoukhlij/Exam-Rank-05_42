		void Warlock::learnSpell(ASpell* spell)
		{
			
			if (spell)
			{
				if (MAP.find(spell->getName()) == MAP.end())
				{
					MAP[spell->getName()] = spell->clone();
				}
			}
		}
		void	Warlock::forgetSpell(std::string spell)
		{
			if (MAP.find(spell) != MAP.end())
			{
				delete MAP[spell];
				MAP.erase(MAP.find(spell));
			}
		}
		void	Warlock::launchSpell(std::string spell, const ATarget& tar)
		{
			if (MAP.find(spell) != MAP.end())
			{

				MAP[spell]->launch(tar);
			}
		}