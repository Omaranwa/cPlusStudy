#include "Main.h"
#include  <iostream>

void log(const char* message)
{
	std::cout << message << std::endl;
}

int main()
{
	for (int i = 0; i < 5; i++)
	{
		log("hello World");
	}
	
	log("________________________________________");

	int i = 0;
	while (i < 5)
	{
		log("hello World");
		i++;
	}
	std::cin.get();
}