#pragma once

#include <iostream>


class ATarget
{
	private:
		std::string _type;
		ATarget();
		ATarget(const ATarget& origine);
		ATarget& operator=(const ATarget& origine);
	public:
		~ATarget();
		ATarget(const std::string& type);


		const std::string& getName() const;
		const std::string& getType() const ;

};