//������� for��

#include <iostream>

using namespace std;

int main() {
	int arr[10] = { 3,1,4,5,3,6,7,4,5,1 };

	for (int i = 0; i < 10; i++) {
		cout << arr[i];
	}
	cout << endl;

	//n�� ���� arr�� �� ĭ ���� �����ϰ� ��
	
	for (int n : arr) {
		cout << n ;
		n++;
	}

	//n�� arr�� ���� �����ϴ� ���̹Ƿ� n�� ���� �ٲ۴ٰ� arr���� �ٲ����� ����
	//���� n++�� ������� ����
	cout << endl;
	for (int n : arr) {
		cout << n ;
	}

	//���۷��� ������ ����ؼ� ���� �ٲ��ָ� n++�� �����
	cout << endl;
	for (int &n : arr) {
		cout << n;
		n++;
	}

	cout << endl;
	for (int n : arr) {
		cout << n;
	}
}


