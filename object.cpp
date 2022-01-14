#include <iostream>
#include <string>

class Character
{
	public:
		std::string name;
		int hp;
		int atk;
		int def;
		void battle() {std::cout << "The Character is battle." << std::endl;}
};

// void Character::battle()
// {
// 	std::cout << "The Character is battle";
// }

int main()
{
	Character character01;
	character01.name = "Noah";
	character01.hp = 10000;
	character01.atk = 2000;
	character01.def = 800;

	std::cout << "Character Status" << std::endl
		<< "Name: " << character01.name << std::endl
		<< "Health Point: " << character01.hp << std::endl
		<< "Attack: " << character01.atk << std::endl
		<< "Defence: " << character01.def << std::endl;
	
	character01.battle();

	return 0;
}