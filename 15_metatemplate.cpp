#include <iostream>

template <class T>
T sum(T x, T y)
{
	return x + y;
}

int main()
{
	int intsum = sum<int>(1,2);
	float floatsum = sum<float>(1.02f, 2.03f);
	std::cout << "Int Sum: " << intsum << std::endl << "Float Sum: " << floatsum << std::endl;
	return 0;
}