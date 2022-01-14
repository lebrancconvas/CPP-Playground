#include <iostream>

class Rectangle
{
	public:	
		void setWidth(int w) { width = w; }
		void setHeight(int h) { height = h; }
		int getWidth() { return width; }
		int getHeight() {return height; }
		int getArea() { return width * height; }
	private:
		int width;
		int height;
};

int main()
{
	Rectangle rectshape;
	rectshape.setWidth(20);
	rectshape.setHeight(70);
	std::cout << "Rectangle Information" << std::endl
		<< "Rectangle Width: " << rectshape.getWidth() << std::endl
		<< "Rectangle Height: " << rectshape.getHeight() << std::endl
		<< "Rectangle Area: " << rectshape.getArea() << std::endl; 
	return 0;
}