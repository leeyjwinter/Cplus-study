//57강
// 생성자 위임
//시h 분m 초s

#include <iostream>
 
using namespace std;

class Time {
public:
	//초를 저장하기 위해선 매개변수 한개
	//분은 2개, 시까지 저장하면 3개

	//Time() {
	//	h = 0;
	//	m = 0;
	//	s = 0;
	//}

	//위 내용과 같은 의미
	Time() : h(0), m(0), s(0) {}


	Time(int s_) : Time() {//초만 받음
		s = s_;
	}
	
	Time(int m_, int s_) : Time(s_) {//분, 초
		m = m_;
	}

	Time(int h_, int m_, int s_) : Time(m_, s_) {//시,분,초
		h = h_;
	}//생성자 위임을 하여 생성자의 요소들을 받음

	int getHour() {
		return h;
	}




private:
	int h;
	int m;
	int s;
};

int main() {
	Time t1;
	Time a(5,10,35);//5시간 10분 35초
	Time b(5, 10);
	cout << t1.getHour()  << endl;
	cout << a.getHour() << endl;
	cout << b.getHour() << endl;
}