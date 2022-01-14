#include <iostream>

int main()
{
	// a is the variable's label, and 5 is the variable's value. 
	int a = 5;

	// &a is the address of variable "a". and * is the symbol for access the address value. 
	int *adda = &a;

	// *adda is how to access the value of variable that is in the address "adda". 
	int addavalue = *adda;

	std::cout << addavalue << std::endl; 
}