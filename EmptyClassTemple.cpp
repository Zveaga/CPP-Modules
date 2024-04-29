#include


// --Conststructors-- //

ClassName::ClassName()
{
	std::cout << _name << " costructed by basic constructor (base class)\n";
}


ClassName::ClassName(const ClassName &object)
{
	std::cout << _name << " constructed by copy constructor\n";

}

// --Destructor-- //

ClassName::~ClassName()
{
	std::cout << _name << " destructed\n";
}

// --Overloads-- //

ClassName &ClassName::operator=(const ClassName &object)
{
	// no need to copy const values!!
	return (*this);
}

// --Conststructors-- //


// --Destructor-- //


// --Overloads-- //


// --Setters-- //


// --Getters-- //


// --Member Functions-- //


// --Exceptions-- //