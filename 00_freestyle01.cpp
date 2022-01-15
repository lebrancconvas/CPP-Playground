#include <iostream>
#include <string>

class Creature
{
	public:
		void setName(std::string _name) {name = _name;}
		void setHeight(int _height) {height = _height;}
		void setWeight(int _weight) {weight = _weight;}
		void setDefaultInit() {initial = false;}


		std::string getName() {return name;}
		int getHeight() {return height;}
		int getWeight() {return weight;}

		virtual void init()
		{
			initial = true;
			std::cout << "Creature is initialized." << std::endl;
		}

		virtual void destroy()
		{
			initial = false;
			std::cout << "Creature is destroyed." << std::endl;
		}

	private:
		std::string name;
		int height;
		int weight;
		bool initial;
};

class Titan : public Creature
{
	public:
		//Setter Method. 


		//Getter Method. 
		
		
		//Initialized Method. 
		void titanInit()
		{
			init = true;
			std::cout << "Titan is initialized success." << std::endl;
		}

		void titanDestroy()
		{
			if(init == true)
			{
				if(height < 3000 && weight < 5000)
				{
					init = false;
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
	titanCommander.titanDestroy();

	return 0;
}