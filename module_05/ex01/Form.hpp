#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>

class Form
{
	private:
		const std::string	_name;
		bool				_is_signed;
		const int			_sign_grade;
		const int			_exec_grade;

	public:
		// --Conststructors-- //
		Form();
		Form(const Form &object);		
		// --Destructor-- //
		~Form();
		// --Overloads-- //
		Form &operator=(const Form &object);	
		// --Member Functions-- //

		// --Exceptions-- //

};










#endif
