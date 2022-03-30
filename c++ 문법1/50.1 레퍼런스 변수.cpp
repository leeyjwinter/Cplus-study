#include <iostream>

using namespace std;

void reference_swap(int& a, int& b);
void simple_swap(int a, int b);


int main() {

	//a의 주소값에 접근하여 a가 가리키는 변수 바꿔줌
	int a = 1;
	int* p = &a;
	*p = 10; 
	cout << p << endl;
	cout << a << endl;

	//k라는 레퍼런스 변수의 값을 바꿈을 통해 b가 가리키는 변수 바꿔줌
	int b = 5;
	int& k = b;
	k = 10;
	cout << k << endl;
	cout << b << endl;

	
	a = 1;
	b = 2;
	reference_swap(a,b);
	int c = 1;
	int d = 2;
	simple_swap(c, d);
}

//call by reference 주소에 참조하여 값을 직접 바꿔줌
void reference_swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
	cout << "a = " << a << " b = " << b << endl;
}

//call by value 단순히 함수 내에서 값을 바꾸지만 실제 a,b를 변화시키지 못함
void simple_swap(int a, int b) {
	int tmp = a;
	a = b;
	b = tmp;
	cout << "a = " << a << " b = " << b << endl;
}

//int a(5); 
//int &r1 = a;  가능

//int &r2 = 1; 불가능

//int &r3 = a * a; 불가능





//int &&r1 = 1; 가능,   &&변수는 r-value라고 함: 값을 바꿀수 없는 값
//int &&r3 = a * a; 가능
//int &&r3 = function(10); 가능
