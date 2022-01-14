#include <iostream>

class Shape
{
	public:
		void setHeight(int h) {height = h;}
		void setWidth(int w) {width = w;}
	protected:
		int height;
		int width;
};

class Rectangle : public Shape
{
	public:
		int area;
		int getArea()
		{
			area = height * width;
			return area;
		}
};

int main()
{
	Rectangle buckshape;
	buckshape.setHeight(20);
	buckshape.setWidth(70);
	std::cout << "Area of the shape: " << buckshape.getArea() << std::endl; 
	return 0;
}