#include <iostream>

using namespace std;
class P {
public:
	int x=10;
protected:
	int y=10;
private:
	int z=10;
};

class A : public P {

};

class B : protected P{

};

class C : private P{

};

int main() {
	A a;
	B b;
	C c;
	cout << a.x << endl;
	cout << a.y << endl;
	cout << a.z << endl;
	cout << b.x << endl;
	cout << b.y << endl;
	cout << b.z << endl;
	cout << c.x << endl;
	cout << c.y << endl;
	cout << c.z << endl;
	
}