//58강
//58.1 의 MixColors 함수를 메서드로 color class에 넣으면 안되나?? > 정적멤버변수로 가능  

#include <iostream>

using namespace std;



class Color {
public:
	Color() : r(0), g(0), b(0) {}
	Color(float r, float g, float b) : r(r), g(g), b(b) {} //첫번쨰 r 은 멤버, 두번쨰 r은 매개변수

	float GetR() { return r; }
	float GetG() { return g; }
	float GetB() { return b; }

	static Color MixColors(Color a, Color b) {//정적 멤버변수 선언으로
		//color class안에 있는 private 필드에 접근이 가능

		Color Result((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
		//private의 변수들을 그대로 접근
		return Result;

	}


private:
	float r;
	float g;
	float b;

};



int main() {
	Color blue(0, 0, 1);
	Color red(1, 0, 0);

	Color purple = Color::MixColors(blue, red);//정적 멤버변수로 하여 사용

	Color purple = purple.MixColors(blue, red);//정적 메서드임에도
	//이처럼 객체의 메서드로 사용하는 것도 여전히 가능, 하지만 가독이 좋지는 않음

	cout << purple.GetR() << " "
		<< purple.GetG() << " "
		<< purple.GetB() << endl; //purple 컬러의 rgb값
}
