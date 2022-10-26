#include <iostream>

int Multiply(int a, int b)
{
	return a * b;
}

void MultiplyAndLog(int a, int b)
{
	int Result = Multiply(a, b);
	std::cout << Result << std::endl;
	
}
int main() 
{
	MultiplyAndLog(5, 5);
	MultiplyAndLog(10, 20);
	MultiplyAndLog(90, 8);
	std::cin.get();
}