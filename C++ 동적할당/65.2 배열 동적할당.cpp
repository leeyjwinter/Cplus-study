//65��
//int arr[1000]; �� ���� �����Ҵ翡 ��쿡�� ��Ȳ�� ���� �޸� �����ϼ� ����


#include <iostream>
using namespace std;

int main() {


	//�迭�����ʹ� �迭ó�� ��� ����
	for (int i = 0; i < len; i++) {
		arr[i] = len - i;
	}

	for (int i= 0; i < len; i++) {
		cout << arr[i] << endl;
	}

	//delete arr;//arr�� 0��°�� delete��
	delete[] arr;//�˾Ƽ� �迭 ��ü�� ��������
}