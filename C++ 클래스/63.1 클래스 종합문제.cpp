//��°�� ����

#include <iostream>

using namespace std;

int n = 0;
namespace A {
	int n = 0;
	namespace B {
		void set() { n = 10; }//B::n�� ���� ������ �ȵƱ� ������ A::n�� 10���� �ٲ���
		int n = 0;
	}
}

namespace C {
	void set();//�ùٸ��� C::n�� �ٲ���
	int n = 0;
}

void C::set() { n = 20; }

int main(){
	using namespace A::B;

	set(); // B::n =10
	C::set(); //C::n = 20 

	cout << ::n << endl; //0
	cout << A::n << endl; //10
	cout << A::B::n << endl;//0
	cout << C::n << endl; //20
}