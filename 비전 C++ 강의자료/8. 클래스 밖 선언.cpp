#include <iostream>
using namespace std;

class Quadrangle {
private:
	int width;
	int height;
	int area;

public:
	int CalculateArea(int argWidth, int argHeight);
	void SetWidth(int width){
		Quadrangle::width = width;
	}
	void SetHeight(int height) {
		Quadrangle::height = height;
	}

};

int Quadrangle::CalculateArea(int argWidth, int argHeight) {
	width = argWidth;
	height = argHeight;
	area = width * height;
	return area;
}

void main() {
	int w, h;
	Quadrangle cQ;

	cout << "Enter Width : ";
	cin >> w;
	cout << "Enter Height : ";
	cin >> h;

	cQ.SetHeight(h);
	cQ.SetWidth(w);
	cout << "Area (w = " << w << ", h=" << h << ") =" << cQ.CalculateArea(h, w);

}