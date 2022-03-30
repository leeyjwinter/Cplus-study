//62강 연산자(사칙연산) 오버로딩

#include <iostream>

using namespace std;

class Vector2 {
public:



	Vector2();
	Vector2(float x, float y);

	float GetX() const;
	float GetY() const;


	//연산자 + 오버로딩(마치 메서드와 같은 역할을 하게끔 함)
	Vector2 operator*(const float rhs) const; //벡터 * 실수
	//벡터 * 실수는 되지만 실수 * 벡터는 안됨 (실수형에다가 개체처럼 연산자를 오버로딩 할 수 없음)
	float operator*(const Vector2 rhs) const; // 벡터의 내적




private:
	float x;
	float y;

};

static Vector2 Sum(Vector2 a, Vector2 b) {
	return Vector2(a.GetX() + b.GetX(), a.GetY() + b.GetY());
}

//실수 * 벡터도 연산 되게끔 오버로딩 지정
//클래스의 멤버가 아니기 때문에 a.operator+(1.6) 처럼 사용은 안됨
Vector2 operator*(const float a, const Vector2 b) {
	return Vector2(a * b.GetX(), a * b.GetY());
}

int main() {
	Vector2 a(2, 3);
	Vector2 b(-1, 4);
	Vector2 c = Sum(a, b);
	Vector2 c4 = a * 1.6;// == a.operator+(1.6)
	float c5 = a * b;


	cout << a.GetX() << "," << a.GetY() << endl;
	cout << b.GetX() << "," << b.GetY() << endl;
	cout << c.GetX() << "," << c.GetY() << endl;
	cout << c4.GetX() << "," << c4.GetY() << endl;
	cout << c5 << endl;
}

Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(float x, float y) : x(x), y(y) {}
float Vector2::GetX() const { return x; }
float Vector2::GetY() const { return y; }
float Vector2::operator*(const Vector2 rhs) const { return (x * rhs.x + y * rhs.y); }
Vector2 Vector2::operator*(const float rhs) const { return Vector2(x * rhs, y * rhs); }
