//59��: �����������
//color ��ü���� id�� �ο��غ���
//�������� �����ϴ� id���� class������ �ְ� ���� �� static�� �ٿ���

#include <iostream>

using namespace std;

//int idCounter = 1;//���� ��ü�� id���� ��� �ο����� ����

class Color {
public:
	Color() : r(0), g(0), b(0) {
		id = idCounter++; //id�� idCounter�����ϰ� idCounter++����(��������)	
	}

	//Color() : r(0), g(0), b(0), id(idCounter++) {} �ص� �� 

	Color(float r, float g, float b) : r(r), g(g), b(b), id(idCounter++) {} //ù���� r �� ���, �ι��� r�� �Ű�����

	float GetR() { return r; }
	float GetG() { return g; }
	float GetB() { return b; }
	int GetId() { return id; }

	static Color MixColors(Color a, Color b) {

		return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);

	}

	static int idCounter; // �������� ����� ���� �ʱⰪ�� �� �� ����
	//��ü�� ������ ���� idCounter���� �ʱ�ȭ��Ű�� �����Ҷ����� ��ȭ�� �ִ°� ���� �ȵ�

	  
private:
	float r;
	float g;
	float b;
	int id;
};

int Color::idCounter = 1;//������ class�ȿ���, �ʱⰪ ������ class �ۿ���

int main() {
	Color blue(0, 0, 1);
	Color red(1, 0, 0);
	Color purple = Color::MixColors(blue, red);//���� ��������� �Ͽ� ���

	cout << purple.GetR() << " "
		<< purple.GetG() << " "
		<< purple.GetB() << endl; //purple �÷��� rgb��

	cout << "red.GetId() = " << red.GetId() << endl;
	cout << "blue.GetId() = " << blue.GetId() << endl;
	cout << "purple.GetId() = " << purple.GetId() << endl;//�� color���� id�� ���

}


//MixColors�� idCounter���� �������� �������� �ʰ� Ŭ���� ���� �����ϴ� ������
//���ʿ��ϰ� ���� ���������� ������� ���� �� ����
