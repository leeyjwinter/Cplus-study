//57��
// ������ ����
//��h ��m ��s

#include <iostream>
 
using namespace std;

class Time {
public:
	//�ʸ� �����ϱ� ���ؼ� �Ű����� �Ѱ�
	//���� 2��, �ñ��� �����ϸ� 3��

	//Time() {
	//	h = 0;
	//	m = 0;
	//	s = 0;
	//}

	//�� ����� ���� �ǹ�
	Time() : h(0), m(0), s(0) {}


	Time(int s_) : Time() {//�ʸ� ����
		s = s_;
	}
	
	Time(int m_, int s_) : Time(s_) {//��, ��
		m = m_;
	}

	Time(int h_, int m_, int s_) : Time(m_, s_) {//��,��,��
		h = h_;
	}//������ ������ �Ͽ� �������� ��ҵ��� ����

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
	Time a(5,10,35);//5�ð� 10�� 35��
	Time b(5, 10);
	cout << t1.getHour()  << endl;
	cout << a.getHour() << endl;
	cout << b.getHour() << endl;
}