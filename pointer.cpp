#include <iostream>

int main()
{
	int a = 5;
	int* adda = &a;
	int addavalue = *adda;

	std::cout << addavalue << std::endl; 
}