//58강
//static : 정적, 클래스 하나 당 하나의 멤버
//동적이라는 의미는 객체에 포함된다는 의미, 클래스 하나 당 여러 멤버를 만들 수 있음

#include <iostream>

using namespace std;

//색 저장 RGB
// 0~1 float R G B로 값 주기


class Color {
public:
	Color() : r(0), g(0), b(0) {}
	Color(float r, float g, float b) : r(r), g(g), b(b) {} //첫번쨰 r 은 멤버, 두번쨰 r은 매개변수

	float GetR() { return r; }
	float GetG() { return g; }
	float GetB() {return b;}


private:
	float r;
	float g;
	float b;

};

Color MixColors(Color a, Color b) {// 두 색의 조합을 반환하는 함수

	Color Result((a.GetR() + b.GetR()) / 2, (a.GetG() + b.GetG()) / 2, (a.GetB() + b.GetB()) / 2);
	//color a,b의 rgb 값의 평균을 rgb로 가지는 color 객체
	return Result;

}

int main() {
	Color blue(0, 0, 1);
	Color red(1, 0, 0);

	Color purple = MixColors(blue, red);

	cout << purple.GetR() << " "
		<< purple.GetG() << " "
		<< purple.GetB() << endl; //purple 컬러의 rgb값
}
