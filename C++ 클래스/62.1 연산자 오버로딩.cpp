//62�� ������(��Ģ����) �����ε�

#include <iostream>

using namespace std;

class Vector2 {
public:



	Vector2();
	Vector2(float x, float y);

	float GetX() const;
	float GetY() const;


	//������ + �����ε�(��ġ �޼���� ���� ������ �ϰԲ� ��)
	Vector2 operator+(const Vector2 rhs) const; //������ ��
	Vector2 operator-(const Vector2 rhs) const; //������ ��
	Vector2 operator*(const float rhs) const; //���� * �Ǽ�
	float operator*(const Vector2 rhs) const; // ������ ����
	Vector2 operator/(const float rhs) const; // ���� / �Ǽ�

private:
	float x;
	float y;

};

static Vector2 Sum(Vector2 a, Vector2 b) {
	return Vector2(a.GetX() + b.GetX(), a.GetY() + b.GetY());
}

int main() {
	Vector2 a(2, 3);
	Vector2 b(-1, 4);
	Vector2 c = Sum(a, b);
	Vector2 c2 = a.operator+(b);
	Vector2 c3 = a + b;
	Vector2 c4 = a * 1.6;
	float c5 = a * b;


	cout << a.GetX() << "," << a.GetY() << endl;
	cout << b.GetX() << "," << b.GetY() << endl;
	cout << c.GetX() << "," << c.GetY() << endl;
	cout << c2.GetX() << "," << c2.GetY() << endl;
	cout << c3.GetX() << "," << c3.GetY() << endl;
	cout << c4.GetX() << "," << c4.GetY() << endl;
	cout << c5 << endl;
}

Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(float x, float y) : x(x), y(y) {}
float Vector2::GetX() const { return x; }
float Vector2::GetY() const { return y; }

Vector2 Vector2::operator+(const Vector2 rhs) const {return Vector2(x + rhs.x, y + rhs.y);}
//������ ���ְ� ����2 Ŭ������ ���۷����� �޼��� ��������

Vector2 Vector2::operator-(const Vector2 rhs) const { return Vector2(x - rhs.x, y - rhs.y); }
float Vector2::operator*(const Vector2 rhs) const { return (x * rhs.x + y * rhs.y); }
Vector2 Vector2::operator*(const float rhs) const { return Vector2(x*rhs, y*rhs); }
Vector2 Vector2::operator/(const float rhs) const { return Vector2(x /rhs, y/rhs); }
