#include <iostream>
#include <string>

int add(int number1, int number2)
{
	return number1 + number2;
}

int minus(int number1, int number2)
{
	return number1 - number2;
}

int main()
{
	int a = 1;
	int b = 2;
	int result = 0;
	std::string symbol = "";
	std::string operation = "ADD";
	if(operation == "ADD")
	{
		symbol = "+";
		result = add(a, b);
	}
	else if(operation == "MINUS")
	{
		symbol = "-";
		result = minus(a, b);
	}
	else
	{
		symbol = "xxx";
		result = 0;
	}
	std::cout << "Result Of " << a << " " << symbol << " " << b << " is " << result << std::endl;
} 
