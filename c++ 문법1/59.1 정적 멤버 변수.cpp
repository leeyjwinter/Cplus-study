//59강: 정적멤버변수
//color 객체마다 id값 부여해보기
//전역으로 선언하는 id값을 class안으로 넣고 싶을 떄 static을 붙여줌

#include <iostream>

using namespace std;

//int idCounter = 1;//다음 객체의 id값을 어떻게 부여할지 결정

class Color {
public:
	Color() : r(0), g(0), b(0) {
		id = idCounter++; //id에 idCounter저장하고 idCounter++해줌(후위증가)	
	}

	//Color() : r(0), g(0), b(0), id(idCounter++) {} 해도 됨 

	Color(float r, float g, float b) : r(r), g(g), b(b), id(idCounter++) {} //첫번쨰 r 은 멤버, 두번쨰 r은 매개변수

	float GetR() { return r; }
	float GetG() { return g; }
	float GetB() { return b; }
	int GetId() { return id; }

	static Color MixColors(Color a, Color b) {

		return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);

	}

	static int idCounter; // 정적으로 선언된 값은 초기값을 줄 수 없음
	//객체에 관련이 없는 idCounter값을 초기화시키면 생성할때마다 변화를 주는게 말이 안됨

	  
private:
	float r;
	float g;
	float b;
	int id;
};

int Color::idCounter = 1;//선언은 class안에서, 초기값 지정은 class 밖에서

int main() {
	Color blue(0, 0, 1);
	Color red(1, 0, 0);
	Color purple = Color::MixColors(blue, red);//정적 멤버변수로 하여 사용

	cout << purple.GetR() << " "
		<< purple.GetG() << " "
		<< purple.GetB() << endl; //purple 컬러의 rgb값

	cout << "red.GetId() = " << red.GetId() << endl;
	cout << "blue.GetId() = " << blue.GetId() << endl;
	cout << "purple.GetId() = " << purple.GetId() << endl;//각 color들의 id값 출력

}


//MixColors나 idCounter들을 전역으로 선언하지 않고 클래스 내에 선언하는 장점은
//불필요하게 여러 전역변수를 사용하지 않을 수 있음
