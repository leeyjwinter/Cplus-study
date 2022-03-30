#include <iostream>
using namespace std;

class Base {
public:
	Base();
	Base(int a);
	~Base();
};

Base::Base() {
	cout << " Constructor of Base " << endl;
} 

Base::Base(int a) {
	cout << "Constructor of Base " << a << endl;
}

Base::~Base() {
	cout << " Destructor of Base " << endl;
} 

class Derived : public Base {
public: 
	Derived();
	Derived(int a);
	~Derived();
};

Derived::Derived() {
	cout << " Constructor of Derived " << endl;
}

Derived::Derived(int a){
	cout << " Constructor of Derived " << a << endl;
}

Derived::~Derived() {
	cout << " Destructor of Derived " << endl;
}

void main() {
	Derived obj1;
	Derived obj2(1);
}