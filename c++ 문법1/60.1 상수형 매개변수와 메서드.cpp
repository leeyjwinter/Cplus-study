//const : ����� ���� ������� ���� �ȹٲ�� �ϴ� ��const double PI = 3.14;
//const�� �Ǵٸ� ���

//1. �Ű������� ���ȭ(��� �Լ��� ���ؼ�)
//2. �ż����� ���ȭ(��� �޼��忡 ���ؼ�)

#include <iostream>

using namespace std;

//�ܾװ��� Ŭ����
class Account {
public:
	Account() : money(0) {}
	Account(int money) : money(money) {}

	//1. �Ű������� ���ȭ
	void Deposit(const int d) {//d���� ����� �ٲ� �� ����
		money += d;
		cout << d << "���� �����߽��ϴ�!!" << endl;
	}

	void Draw(int d) {
		if (money >=d )
			money -= d;
		cout << d << "���� �����߽��ϴ�!" << endl;
	}

	int ViewMoney() {
		money++; //�Ǽ��� �ۼ��� �ڵ�, �̷����� money�� �ǵ������� �߸� ��ȭ��ų �� ����
		//�̸� �����ϱ� ���� ���� const �޼���
		return money;
	}

	//2. �޼����� ���ȭ
	int SafeViewMoney() const {//private ���� �������(money) ���� ��ȭ�� ���ֵ��� const�� �ڿ� ����
		return money;
	}

	const int AnotherViewMoney() {//���ϰ��� ���ȭ �ϴ� ������, ��ǻ� ���ϰ��� �ٲٴ� ��찡 ���� �ʾ�
		//�ǹ� ���� ��찡 ����
		return money;
	}

private:
	int money;
};

int main() {

	Account doodle(100);
	doodle.Deposit(100);
	doodle.Draw(20);

	cout << doodle.ViewMoney() << "���� �����ֽ��ϴ�!" << endl;
	cout << doodle.SafeViewMoney() << "���� �����ֽ��ϴ�!" << endl;

}