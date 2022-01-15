#include <iostream>
#include <string>

class Titan
{
	public:
		//Setter Method. 
		void setName(std::string _name) {name = _name;}
		void setHeight(int _height) {height = _height;}
		void setWeight(int _weight) {weight = _weight;}
		void setDefaultInit() {init = false;}

		//Getter Method. 
		std::string getName() {return name;}
		int getHeight() {return height;}
		int getWeight() {return weight;}
		bool getInit() {return init;}
		
		//Initialized Method. 
		void titanInit()
		{
			init = true;
			std::cout << "Titan is initialized success." << std::endl;
		}

		void destroy()
		{
			if(init == true)
			{
				if(height >= 3000 && weight >= 5000)
				{
					std::cout << "Destroy Success." << std::endl;
				}
				else
				{
					std::cout << "Destroy Failed." << std::endl;
				}
			}
			else
			{
				std::cout << "Please Init your Titan first." << std::endl;
			}
		}

	private:
		std::string name;
		int height;
		int weight;
		bool init;
};

int main()
{
	Titan titanCommander;
	titanCommander.setName("Titan Commander");
	titanCommander.setHeight(2000);
	titanCommander.setWeight(2500);
	titanCommander.titanInit();
	titanCommander.destroy();

	return 0;
}