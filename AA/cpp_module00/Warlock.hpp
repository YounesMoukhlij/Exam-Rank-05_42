

#pragma once

#include <iostream>


class Warlock
{
	private:
		std::string _name;
		std::string _title;
		Warlock(const Warlock& o);
		Warlock& operator=(const Warlock& o);
	public:
		Warlock(const std::string& name, const std::string& title );
		~Warlock();

		const std::string& getName() const;
		const std::string& getTitle() const;

		void				setTitle(const std::string& title);
		void				introduce() const;

}