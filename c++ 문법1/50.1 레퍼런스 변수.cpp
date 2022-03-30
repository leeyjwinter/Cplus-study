#include <iostream>

using namespace std;

void reference_swap(int& a, int& b);
void simple_swap(int a, int b);


int main() {

	//a�� �ּҰ��� �����Ͽ� a�� ����Ű�� ���� �ٲ���
	int a = 1;
	int* p = &a;
	*p = 10; 
	cout << p << endl;
	cout << a << endl;

	//k��� ���۷��� ������ ���� �ٲ��� ���� b�� ����Ű�� ���� �ٲ���
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

//call by reference �ּҿ� �����Ͽ� ���� ���� �ٲ���
void reference_swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
	cout << "a = " << a << " b = " << b << endl;
}

//call by value �ܼ��� �Լ� ������ ���� �ٲ����� ���� a,b�� ��ȭ��Ű�� ����
void simple_swap(int a, int b) {
	int tmp = a;
	a = b;
	b = tmp;
	cout << "a = " << a << " b = " << b << endl;
}

//int a(5); 
//int &r1 = a;  ����

//int &r2 = 1; �Ұ���

//int &r3 = a * a; �Ұ���





//int &&r1 = 1; ����,   &&������ r-value��� ��: ���� �ٲܼ� ���� ��
//int &&r3 = a * a; ����
//int &&r3 = function(10); ����
