#include <iostream>
#include <string>

class Shape
{
	public:
		void setWidth(float _width) {width = _width;} 
		void setHeight(float _height) {height = _height;} 

		int getWidth() {return width;}
		int getHeight() {return height;}

		virtual int getArea();
	private:
		float width;
		float height;
};

class Rectangle : public Shape 
{
	public:
		int getArea() {return getWidth() * getHeight();}
};

class Triangle : public Shape 
{
	public:
		int getArea() {return (getWidth() * getHeight()) / 2;}
};

class Stationary
{
	public:
		void setMaterial(std::string _stick, std::string _core)
		{
			stickMaterial = _stick;
			coreMaterial = _core;
		}

		void setLength(float _length) {length = _length;}

		void draw()
		{
			std::cout << "Drawing." << std::endl;
		}
	private:
		std::string stickMaterial;
		std::string coreMaterial;
		float length;
};

class Pencil : public Stationary
{
	
};

class Pen : public Stationary
{
	public:
		void setHasInk(bool _hasInk) {hasInk = _hasInk;}

		bool getHasInk() {return hasInk;}
	private:
		bool hasInk;
};

int main()
{
	// pencil.draw(shape); 
	return 0;
}