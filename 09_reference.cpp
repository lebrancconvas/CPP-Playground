#include <iostream>

int reference(int &a)
{
	int _a = a;
	return _a;
}

int value(int a)
{
	int _a = a;
	return _a;
}

int main()
{
	int number1 = 3;
	std::cout << "Reference: " << reference(number1) << std::endl
		<< "Value: " << value(number1) << std::endl;
	return 0;
}