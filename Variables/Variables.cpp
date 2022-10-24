#include <iostream>


int main() 
{
	/*
		Data type Testing 
			Primitive Data Types:
				Integer as "int"
						require 4 bytes of memory, from -2147483648 to 2147483647.
				::::::::::::::::::
				Character as "char"
						require 1 byte of memory, from -128 to 127 or 0 to 255.
				Boolean as "bool"
						either true or false
				Floating Point as "float"
						for decimal values like "2.5", 4 bytes of memory
				Double Floating Point as "double"
						for decimal values like "2.5", 8 bytes of memory
				Valueless or Void "void something ()"
						means no value.
				Wide Character as "wchar_t"
						same as char but It is generally 2 or 4 bytes long.	
	
		Data type modifiers:
				Signed = normal values accept negative and positive values
				Unsigned = negative values only
				Short = using less space but short limit
				Long = used as longer method of adding more space

				for more see: https://www.programiz.com/cpp-programming/data-types
	*/
	/*
		Derived Data Types:
			Function: block of code or program-segment that is defined to perform a specific well-defined task
			Array: collection of items stored at continuous memory locations
			Pointers: symbolic representation of addresses
			Reference: an alternative name for an existing variable.

		User-Defined DataTypes:
			Class: building block, holds its own data members and member functions
			Structure: structure creates a data type that can be used to group items of possibly different types into a single type
			Union: all members share the same memory location, If we change x, we can see the changes being reflected in y.
			Enumeration or enum: It is mainly used to assign names to integral constants
			Typedef: allows you to define explicitly new data type, ex. typedef type name;
	*/

	// int is a signed 4 bytes = 2.2 billion negative or positive numbers
	int a = 5;

	// a way to print our values to a console
	std::cout << a << std::endl;

	// int is a unsigned 4 bytes = almost 4.1 billion negative only numbers
	unsigned int b = 5;

	// a way to print our values to a console
	std::cout << a << std::endl;

	// wait for the enter key
	std::cin.get();
}