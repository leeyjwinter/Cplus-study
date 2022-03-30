//58��
//static : ����, Ŭ���� �ϳ� �� �ϳ��� ���
//�����̶�� �ǹ̴� ��ü�� ���Եȴٴ� �ǹ�, Ŭ���� �ϳ� �� ���� ����� ���� �� ����

#include <iostream>

using namespace std;

//�� ���� RGB
// 0~1 float R G B�� �� �ֱ�


class Color {
public:
	Color() : r(0), g(0), b(0) {}
	Color(float r, float g, float b) : r(r), g(g), b(b) {} //ù���� r �� ���, �ι��� r�� �Ű�����

	float GetR() { return r; }
	float GetG() { return g; }
	float GetB() {return b;}


private:
	float r;
	float g;
	float b;

};

Color MixColors(Color a, Color b) {// �� ���� ������ ��ȯ�ϴ� �Լ�

	Color Result((a.GetR() + b.GetR()) / 2, (a.GetG() + b.GetG()) / 2, (a.GetB() + b.GetB()) / 2);
	//color a,b�� rgb ���� ����� rgb�� ������ color ��ü
	return Result;

}

int main() {
	Color blue(0, 0, 1);
	Color red(1, 0, 0);

	Color purple = MixColors(blue, red);

	cout << purple.GetR() << " "
		<< purple.GetG() << " "
		<< purple.GetB() << endl; //purple �÷��� rgb��
}
