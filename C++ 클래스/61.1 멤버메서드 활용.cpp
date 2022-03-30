//61��
//����
//��� �޼����� ����, ���� �и��ϱ�

//����: (1,3), (-1,7) �� �Ǽ� 2���� ���� ������ ���� ����, +,-,����,���� ���

#include <iostream>

using namespace std;


class Vector2 {//���� 2��¥�� ����
public:
	//Vector2() : x(0), y(0) {}// �Ű������� ���� ���� x=0, y=0�̵��� �ϴ� ������
	//Vector2(float x, float y) :  x(x), y(y) {}//x�� �Ű������� �Է��� x, y�� �Ű������� �Է��� y


	
	//�̺κ���
	Vector2();
	Vector2(float x, float y);
	//�� ���� ����θ� �ϰ� ���Ǹ� Ŭ���� �ۿ��� �� �� ����

	float GetX() const;//get�Լ��� const�� �ϴ� ���� ����
	float GetY() const;

	//vector c = a + b �� ���� ������ �����ε��� �� ���� ���� ���� ���� �޼���
	static Vector2 Sum(Vector2 a, Vector2 b) {
		return Vector2(a.x + b.x, a.y + b.y);
	}

	//�ڱ� �ڽſ� �Ű����� ���͸� ���ϴ� ������ �޼���(Ư���� ��ü�� ���Ե� �� �ִ� �޼���)
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

//������ Ȥ�� �޼��带 ������ ���Լ��� ���� Ŭ�������� ���ӽ����̽�ó�� �տ� �ٿ������
Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(float x, float y) : x(x), y(y) {}
float Vector2::GetX() const {return x; }
float Vector2::GetY() const { return y; }