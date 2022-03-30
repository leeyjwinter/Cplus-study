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
	Vector2 operator*(const float rhs) const; //���� * �Ǽ�
	//���� * �Ǽ��� ������ �Ǽ� * ���ʹ� �ȵ� (�Ǽ������ٰ� ��üó�� �����ڸ� �����ε� �� �� ����)
	float operator*(const Vector2 rhs) const; // ������ ����




private:
	float x;
	float y;

};

static Vector2 Sum(Vector2 a, Vector2 b) {
	return Vector2(a.GetX() + b.GetX(), a.GetY() + b.GetY());
}

//�Ǽ� * ���͵� ���� �ǰԲ� �����ε� ����
//Ŭ������ ����� �ƴϱ� ������ a.operator+(1.6) ó�� ����� �ȵ�
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
