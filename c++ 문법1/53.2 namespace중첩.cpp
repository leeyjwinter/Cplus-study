//53��
//��ønamespace��� ����
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
			n = 40;//���ӽ����̽� �ȿ��� ���� ���� �������Ƿ� doodle��n�� �ٲ�
		}
		int n;//newgoogle�� n�� �����
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
	set();//������ set���� doodle�� set���� ���� ����
	::set();//������ set
	doodle::set();//doodle�� set
	google::set();//google�� set


}

//newgoogle�� set�� �ڴʰ� �����ϴ� ����� �ùٸ��� �����
void doodle::newgoogle::set() {
	n = 40;
}