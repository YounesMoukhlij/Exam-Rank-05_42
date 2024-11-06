
#pragma once


#include <iostream>


class A
{
	private:
		A();
		A(const A& origine);
		A& operator=(const A& origine);
		std::string	name;
		std::string	title;
	public:
		A(const std::string& _name, const std::string&  _title);
		~A();


		const std::string&    	getName() const;
		const std::string&	 	getTitle() const;
		void					introduce() const;
		void					setTitle(const std::string& _title);

};