//출력결과 예측

#include <iostream>

using namespace std;

int n = 0;
namespace A {
	int n = 0;
	namespace B {
		void set() { n = 10; }//B::n이 아직 선언이 안됐기 때문에 A::n을 10으로 바꿔줌
		int n = 0;
	}
}

namespace C {
	void set();//올바르게 C::n을 바꿔줌
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