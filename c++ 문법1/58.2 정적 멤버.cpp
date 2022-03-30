//58��
//58.1 �� MixColors �Լ��� �޼���� color class�� ������ �ȵǳ�?? > ������������� ����  

#include <iostream>

using namespace std;



class Color {
public:
	Color() : r(0), g(0), b(0) {}
	Color(float r, float g, float b) : r(r), g(g), b(b) {} //ù���� r �� ���, �ι��� r�� �Ű�����

	float GetR() { return r; }
	float GetG() { return g; }
	float GetB() { return b; }

	static Color MixColors(Color a, Color b) {//���� ������� ��������
		//color class�ȿ� �ִ� private �ʵ忡 ������ ����

		Color Result((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
		//private�� �������� �״�� ����
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

	Color purple = Color::MixColors(blue, red);//���� ��������� �Ͽ� ���

	Color purple = purple.MixColors(blue, red);//���� �޼����ӿ���
	//��ó�� ��ü�� �޼���� ����ϴ� �͵� ������ ����, ������ ������ ������ ����

	cout << purple.GetR() << " "
		<< purple.GetG() << " "
		<< purple.GetB() << endl; //purple �÷��� rgb��
}
