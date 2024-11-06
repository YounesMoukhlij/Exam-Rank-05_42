


		void ASpell::launch (const ATarget& target) const
		{
			target.getHitBySpell(this);
		}


ASpell::ASpell(const std::string& name, const std::string& title) : _name(name), _effects(effects)
{

}

ASpell::~ASpell()
{

}

const std::string&   ASpell::getName() const
{
	return _name;
}

const std::string&  ASpell::getEffects() const
{
	return _effects;
}



ASpell& ASpell::operator=(const ASpell& origine)
{
		_name = origine._name;
		_effects = origine._effects;
	return *this;
}