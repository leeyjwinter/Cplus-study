//53강
//중첩namespace사용 가능
#include <iostream>

using namespace std;

int n;

void set() {
	n = 10;
}

namespace doodle {
	int n;
	void set() {
		n = 20;
	}

	namespace google {
		int n;
		void set() {
			n = 30;
		}
	}

	namespace newgoogle {
		
		void set() {
			n = 40;//네임스페이스 안에서 아직 선언 안했으므로 doodle의n을 바꿈
		}
		int n;//newgoogle의 n이 선언됨
	}
}

int main() {
	::set();
	doodle::set();
	doodle::google::set();
	doodle::newgoogle::set();

	cout << ::n << endl;
	cout << doodle::n << endl;
	cout << doodle::google::n << endl;
	cout << doodle::newgoogle::n << endl;

	using namespace doodle;
	set();//전역의 set인지 doodle의 set인지 구별 못함
	::set();//전역의 set
	doodle::set();//doodle의 set
	google::set();//google의 set


}

//newgoogle의 set을 뒤늦게 선언하는 경우라면 올바르게 적용됨
void doodle::newgoogle::set() {
	n = 40;
}