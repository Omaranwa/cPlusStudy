#include "Main.h"
#include  <iostream>

void log(const char* message)
{
	std::cout << message << std::endl;
}

int main()
{
	int x = 5;
	bool BoolResult = x == 5;
	if (BoolResult)
	{
		log("hello World");
	}
	else
	{
		log("Error")
	}
	
	std::cin.get();
}