//61강
//벡터
//멤버 메서드의 선언, 정의 분리하기

//벡터: (1,3), (-1,7) 등 실수 2개를 묶은 값으로 연산 가능, +,-,내적,외적 등등

#include <iostream>

using namespace std;


class Vector2 {//성분 2개짜리 벡터
public:
	//Vector2() : x(0), y(0) {}// 매개변수가 없을 때는 x=0, y=0이도록 하는 생성자
	//Vector2(float x, float y) :  x(x), y(y) {}//x는 매개변수로 입력한 x, y는 매개변수로 입력한 y


	
	//이부분을
	Vector2();
	Vector2(float x, float y);
	//와 같이 선언부만 하고 정의를 클래스 밖에서 할 수 있음

	float GetX() const;//get함수는 const로 하는 것이 좋음
	float GetY() const;

	//vector c = a + b 와 같은 연산자 오버로딩을 모를 때를 위해 만든 정적 메서드
	static Vector2 Sum(Vector2 a, Vector2 b) {
		return Vector2(a.x + b.x, a.y + b.y);
	}

	//자기 자신에 매개변수 벡터를 더하는 동적인 메서드(특정한 개체에 포함될 수 있는 메서드)
	Vector2 Add(Vector2 rhs) {
		return Vector2(x + rhs.x, y + rhs.y);
	}


private:
	float x;
	float y;

};



int main() {
	Vector2 a(2, 3);
	Vector2 b(-1, 4);
	Vector2 c = Vector2::Sum(a, b);
	Vector2 c2 = a.Add(b);


	cout << a.GetX() << "," << a.GetY() << endl;
	cout << b.GetX() << "," << b.GetY() << endl;
	cout << c.GetX() << "," << c.GetY() << endl;
	cout << c2.GetX() << "," << c2.GetY() << endl;
}

//생성자 혹은 메서드를 정의할 때함수가 속한 클래스명을 네임스페이스처럼 앞에 붙여줘야함
Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(float x, float y) : x(x), y(y) {}
float Vector2::GetX() const {return x; }
float Vector2::GetY() const { return y; }