#include "Main.h"
#include  <iostream>

void log(const char* message)
{
	std::cout << message << std::endl;
}

int main()
{
	/// <summary>
	/// Control Flow
	/// </summary>
	/// <returns></returns>
	for (int i = 0; i < 5; i++)
	{
		log("hello World");
	}
	/// loop Part Of Training
	/* 
			log("________________________________________");
			int i = 0;
			while (i < 5)
			{
				log("hello World");
				i++;
			}
	*/
	
	std::cin.get();
}