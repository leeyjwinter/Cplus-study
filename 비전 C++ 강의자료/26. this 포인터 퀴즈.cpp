#include <iostream>


using namespace std;

class Unit {
private:
	int x, y;

public:
	Unit* p;

	Unit(int x, int y, Unit* p) : x(x), y(y), p(p) {}


	void Print() {

	cout << this->x << ", " << this->y << endl;
	if (!p) return;
	this->p->Print();


	}
};

int main() {
	Unit c(5, 6, NULL);
	Unit b(3, 4, &c);
	Unit a(1, 2, &b);

	cout << "[print a]" << endl; a.Print();
	cout << "[Print b]" << endl; b.Print();
	cout << "[Print c]" << endl; c.Print();

	return 0;

}