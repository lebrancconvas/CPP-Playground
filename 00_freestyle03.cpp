#include <iostream>
#include <string>

class Shape
{
	public:
		void setWidth(float _width) {width = _width;} 
		void setHeight(float _height) {height = _height;} 

		int getWidth() const {return width;}
		int getHeight() const {return height;}

		virtual int getArea()
		{
			return width * height;
		}
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
	public:
		void draw(const Shape& shape)
		{
			if(shape.getWidth() >= 0 && shape.getHeight() >= 0)
			{
				std::cout << "Drawing Shape Success." << std::endl;
			}
		}
};

class Pen : public Stationary
{
	public:
		void setHasInk(bool _hasInk) {hasInk = _hasInk;}

		bool getHasInk() {return hasInk;}

		void draw(const Shape& shape)
		{
			if(getHasInk())
			{
				if(shape.getWidth() >= 0 && shape.getHeight() >= 0)
				{
					std::cout << "Drawing Shape Success" << std::endl;
				}
				else
				{
					std::cout << "Can't Draw Null Shape." << std::endl;
				}
			}
			else
			{
				std::cout << "Drawing Failed." << std::endl;
			}
		}
	private:
		bool hasInk;
};

int main()
{
	Pencil rotting;
	rotting.setLength(10);
	rotting.setMaterial("Wood", "Graphite");

	Rectangle rect;
	rect.setWidth(10);
	rect.setHeight(20);

	rotting.draw(rect);

	return 0;
}