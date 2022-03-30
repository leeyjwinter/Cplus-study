//const : 상수형 변수 사용으로 값을 안바뀌게 하는 것const double PI = 3.14;
//const의 또다른 기능

//1. 매개변수의 상수화(모든 함수에 대해서)
//2. 매서드의 상수화(멤버 메서드에 대해서)

#include <iostream>

using namespace std;

//잔액관리 클래스
class Account {
public:
	Account() : money(0) {}
	Account(int money) : money(money) {}

	//1. 매개변수의 상수화
	void Deposit(const int d) {//d값을 맘대로 바꿀 수 없음
		money += d;
		cout << d << "원을 예금했습니다!!" << endl;
	}

	void Draw(int d) {
		if (money >=d )
			money -= d;
		cout << d << "원을 인출했습니다!" << endl;
	}

	int ViewMoney() {
		money++; //실수로 작성된 코드, 이로인해 money를 의도적으로 잘못 변화시킬 수 있음
		//이를 방지하기 위한 것이 const 메서드
		return money;
	}

	//2. 메서드의 상수화
	int SafeViewMoney() const {//private 내의 멤버변수(money) 값에 변화를 못주도록 const를 뒤에 붙임
		return money;
	}

	const int AnotherViewMoney() {//리턴값을 상수화 하는 것으로, 사실상 리턴값을 바꾸는 경우가 많지 않아
		//의미 없는 경우가 많음
		return money;
	}

private:
	int money;
};

int main() {

	Account doodle(100);
	doodle.Deposit(100);
	doodle.Draw(20);

	cout << doodle.ViewMoney() << "원이 남아있습니다!" << endl;
	cout << doodle.SafeViewMoney() << "원이 남아있습니다!" << endl;

}