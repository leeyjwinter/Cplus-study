#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Square {
	int height, width;
public:
	Square(int x, int y) {
		height = x;
		width = y;
	}
	friend int addSquare(Square A, Square B);
};

int addSquare(Square A, Square B) {
	int add =  A.height * A.width + B.height * B.width;
	cout << "Sum of Areas : " << add << endl;
	return add;
}


int main()
{
	Square A(5, 3), B(4, 4);
	addSquare(A, B);
	return 0;
}