#include <iostream>
//re: 실수
//im: 허수

using namespace std;

class Plus {
public:
	void printPlus(int re1, int im1, int re2, int im2) {
		cout << "Plus: " << re1 + re2 << "+" << im1 + im2 << "j" << endl;
	};
};

class Minus {
public:
	void printMinus(int re1, int im1, int re2, int im2) {
		cout << "Minus: " << -re1 + re2 << "+" << -im1 + im2 << "j" << endl;
	};
};

class Complex : public Plus, public Minus {
private:
	int re;
	int im;

public:
	Complex() : re(0), im(0) {};

	void setCom(int are, int aim) {
		re = 0;
		im = 0;
		re += are;
		im += aim;
	}

	void plus(int are, int aim) {
		printPlus(are, aim, re, im);
	}

	void minus(int are, int aim) {
		printMinus(are, aim, re, im);
	}
};
void main() {
	Complex a;

	a.plus(2, 3);
	a.minus(2, 3);

	a.setCom(1, 1);
	a.plus(2, 3);
	a.minus(2, 3);
}