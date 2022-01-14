#include <iostream>

int add(int number1, int number2)
{
	return number1 + number2;
}

int main()
{
	int a = 1;
	int b = 2;
	std::cout << "Result Of " << a << " + " << b << " is " << add(1,2) << std::endl;
} 
