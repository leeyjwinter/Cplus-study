//65�� 
// �����Ҵ�: ���α׷� ���� �߿� �޸𸮸� �Ҵ�޾� ����ϰų� Ǯ����
//���� �Ҵ�: int a; ���α׸��� ������ �� ����� ���� �� �����

#include <iostream>

using namespace std;

int main() {
	int* a = new int(5); //new�� 5�� ����� �ּҰ� ��ȯ

	cout << a << endl;
	cout << *a << endl;

	*a = 10;

	cout << a << endl;
	cout << *a << endl;

	delete a;//�޸� ���� ���� ����� ��
}