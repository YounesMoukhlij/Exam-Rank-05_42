
#pragma once


#include <iostream>


class ASpell
{
	private:
		ASpell();
		ASpell(const ASpell& origine);
		ASpell& operator=(const ASpell& origine);
		std::string	name;
		std::string	title;
	public:
		ASpell(const std::string& _name, const std::string&  _title);
		~ASpell();


		const std::string&    	getName() const;
		const std::string&	 	getTitle() const;
		void					introduce() const;
		void					setTitle(const std::string& _title);

};