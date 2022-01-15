#include <iostream>
#include <string>

class Creature
{
	public:
		void setName(std::string _name) {name = _name;}
		void setHeight(int _height) {height = _height;}
		void setWeight(int _weight) {weight = _weight;}
		void setInit(bool _initial) {initial = _initial;}


		std::string getName() {return name;}
		int getHeight() {return height;}
		int getWeight() {return weight;}
		bool getInit() {return initial;}

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
		void init()
		{
			setInit(true);
			std::cout << "Titan is initialized success." << std::endl;
		}

		void destroy()
		{
			if(getInit() == true)
			{
				if(getHeight() < 3000 && getWeight() < 5000)
				{
					setInit(false);
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
};

int main()
{
	Titan titanCommander;

	titanCommander.setName("Titan Commander");
	titanCommander.setHeight(1800);
	titanCommander.setWeight(2500);
	
	titanCommander.init();
	titanCommander.destroy();

	return 0;
}