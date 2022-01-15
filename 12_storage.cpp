#include <iostream>

// extern int c = 3;

int main()
{
	static int a = 1;
	auto b = 2;

	std::cout << a << b << std::endl;

	return 0;
}