#include <iostream>

using namespace std;
class Triangle {
	int width;
	int height;

public:
	Triangle() {}
	Triangle(int argWidth, int argHeight) : width(argWidth), height(argHeight) {}
	int GetWidth() {
		return width;
	}
	int GetHeight() {
		return height;
	}
};

class Square{

	int width;

public:
	Square() {}
	Square(int argSide) : width(argSide) {}
	int GetWidth() {
		return width;
	}
};

class Circle {

	int radius;

public:
	Circle() {}
	Circle(int argRadius) : radius(argRadius) {}
	int GetRadius() {
		return radius;
	}
};

int Calculate(Triangle a) {
	return a.GetWidth()* a.GetHeight() / 2;
}

int Calculate(Square a) {
	return pow(a.GetWidth(), 2);
}

double Calculate(Circle a) {
	return 3.14 * pow(a.GetRadius(),2);
}

int main() {
	Triangle tri(5, 2);
	Square square(5);
	Circle circle(5);
	cout << "Area of Triangle = " << Calculate(tri) << "\n";
	cout << "Area of Square = " << Calculate(square) << "\n";
	cout << "Area of Circle = " << Calculate(circle) << "\n";
}