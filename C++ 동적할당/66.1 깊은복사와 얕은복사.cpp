//66��
//���� ����


#include <iostream>

using namespace std;

int main() {
	int* a = new int(5);
	int* b = new int(3);


	a = b;//���� ����-�������� �ٲ� : ������ ����
	//������:
	//a�� b�� ��� int 3�� ����Ű��
	//a�� delete�ϹǷ� b�� ����Ű�� ���� ������ delete b�� �Ұ�����


	*a = *b;//���� ����(a�� ����Ű�� �� ��ü�� �ٲ�) : ���� ����


	delete a;
	delete b; 
}

