//54��
// 
//struct �� class�� ����?
//class�� �ڷ����� + �ڷ�ó�� = ���� + �Լ�
//Ŭ����: Ư���� �뵵�� �����ϱ� ���� ������ �Լ��� ��Ƶ� Ʋ(�ڷ���)
//int a ���� int�� Ÿ��, a�� ��ü
//Ŭ������ Ÿ��, Ŭ������ �� ���� ��ü(������Ʈ)��� ��

 
#include <iostream>

using namespace std;

struct TV {

private://struct �϶��� private: �Ƚ��ָ� �⺻���� public, class�� �⺻���� private
	bool powerOn;
	int channel;
	int volume;

	//���� ������ �ִ밡 10�̾��ٸ�?? �����߻���
	//�̸� �������� �Լ� ����

public:
	void On() {
		powerOn = true;
		cout << "TV�� �׽��ϴ�." << endl;
	}

	void Off() {
		powerOn = false;
		cout << "TV�� �����ϴ�." << endl;
	}

	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100)
			volume = vol;
		cout << "������ " << volume << "(��)�� �ٲ���ϴ�" << endl;

	}

	void setChannel(int cnl) {
		if (cnl >=1 && cnl <=999)
			channel = cnl;
		cout << "ä���� " << channel << "(��)�� �ٲ���ϴ�" << endl;
	}
};

int main() {
	TV lg;
	//lg.powerOn = true;
	//lg.channel = 10;
	lg.setVolume(50);
	//setVolume�Լ��� volume�� �����ϰ� �����ϴ� �ڵ带 ����
	// �׷����� �ұ��ϰ� volume�� struct�ۿ��� ������� �ٲ� �� ����
	//private, public�� �̿��ϸ� ��

	lg.On();
	lg.Off();
	lg.setChannel(50);
}

