//56��
//������: ��ü�� ������ �� �ڵ����� ȣ��Ǵ� �Լ�
//�Ҹ���: ��ü�� �Ҹ�� �� �ڵ����� ȣ��Ǵ� �Լ�

#include <iostream>

using namespace std;

class MyClass {
public:
	MyClass() { // ������
		cout << "�����ڰ� ȣ��Ǿ���!!" << endl;
	}

	~MyClass() {//�Ҹ���
		cout << "�Ҹ��ڰ� ȣ��Ǿ���!" << endl;
	}
};

//MyClass globalObj;//�����Լ� ȣ�� ������ ���� ��ü�� �����Ǹ鼭 ������ ȣ���


void testLocalObj() {
	cout << "testlocalObj �Լ� ����!" << endl;
	MyClass localObj;
	cout << "testlocalObj �Լ� ��!" << endl;
}

int main() {
	cout << "main �Լ� ����!" << endl;
	testLocalObj();
	cout << "main �Լ� ��!" << endl;
	//������ ������ localObj�� �Ҹ��ڰ� ȣ���
	
}

//main�� ������ �Ҹ��ڰ� ȣ���


