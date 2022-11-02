#include "Log.h"
#include <iostream>

void intlog()
{
	log("something");
}

void log(const char* message)
{
	
	std::cout << message << std::endl;
}