#include <iostream>

class Device
{
	public:
		Device(const int& _id) {id = _id;}
		int getID() const {return id;}
	private:
		int id;
};

class Window
{
	public:
		void setup(const Device& device)
		{
			std::cout << "Setup Device: " << device.getID() << std::endl;
		}
};

int main()
{
	Device samsung(5);
	Window window;
	std::cout << "Device ID: " << samsung.getID() << std::endl;
	window.setup(samsung);
	window.setup(Device(11));
	return 0;
}