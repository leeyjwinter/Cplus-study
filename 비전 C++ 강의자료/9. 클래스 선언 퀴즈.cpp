#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

class Circle {
private:
	int radius;

public:
	void SetRadius(int radius_) {
		radius = radius_;
	}

	float CalculateArea() {
		return radius * radius * 3.14;
	}
};



int main() {
	int radius = 0;
	Circle circle;

	printf("Input radius: (cm)\n");
	scanf_s("%d", &radius);

	circle.SetRadius(radius);
	printf("Area (radius=%d) = %0.3f\n", radius, circle.CalculateArea());
}