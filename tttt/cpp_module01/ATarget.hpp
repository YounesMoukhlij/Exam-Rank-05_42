

#pragma once


#include <iostream>


class ATarget
{
	protected:
		ATarget();
		ATarget(const ATarget& origine);
		ATarget& operator=(const ATarget& origine);
		std::string	_type;
	public:
		ATarget(const std::string& name, const std::string&  effects);
		virtual ~ATarget();


		const std::string&    	getName() const;
		const std::string&	 	getEffects() const;



		virtual ATarget* clone () const = 0;




};
