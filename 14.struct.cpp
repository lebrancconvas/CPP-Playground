#include <iostream>
#include <string>

struct Food
{
	std::string name;
	std::string taste;
	void displayFood()
	{
		std::cout << "Name: " << name << std::endl << "Taste: " << taste << std::endl;
	}
};

int main()
{
	struct Food kaprao;
	kaprao.name = "Kaprao";
	kaprao.taste = "Spicy";
	kaprao.displayFood();
	return 0;
}