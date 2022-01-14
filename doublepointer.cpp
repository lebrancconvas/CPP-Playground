#include <iostream>

int main()
{
	int a = 5;
	int *addressofa = &a;
	int **addressofaddressofa = &addressofa;
	int valueofaddressofa = *addressofa;
	int valueofaddressofaddressofa = **addressofaddressofa;
	std::cout << "a: " << a << std::endl << "Address of a: " << addressofa << std::endl << "Address of address of a: " << addressofaddressofa << std::endl << "Value of Address of a: " << valueofaddressofa << std::endl << "Value of Address of Address of a: " << valueofaddressofaddressofa << std::endl;
	return 0; 
}