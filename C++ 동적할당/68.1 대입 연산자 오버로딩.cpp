//68�� ���� �����ڷ� ��ü ����
//s3 = s1

#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <string>


using namespace std;

class String {
public:
	String() {
		cout << "String() ������ ȣ��" << endl;
		strData = NULL;
		len = 0;
	}

	String(const char* str) {
		cout << "String(const char* ������ ȣ��)" << endl;
		len = strlen(str);
		strData = new char[len + 1];
		cout << "strData �Ҵ� : " << (void*)strData << endl;/*���ڿ��� �ƴ� �ּڰ��� strData��� �ǹ�*/
		strcpy(strData, str);
	}

	//���� ������
	String(const String& rhs) {
		//strData = rhs.strData; //���� ����
		cout << "String(const String& rhs)" << endl;
		strData = new char[rhs.len + 1];
		cout << "strData �Ҵ� : " << (void*)strData << endl;
		strcpy(strData, rhs.strData);
		len = rhs.len; //���� ����
	}
	~String() {
		cout << "~String() �Ҹ��� ȣ��" << endl;
		delete[] strData;
		cout << "strData ������ : " << (void*)strData << endl;
		strData = NULL; //������ �޸��� ������ ���� ��
	}

	//���� ������
	String &operator=(const String &rhs) { //&rhs�� �ƴ� rhs��� ���ٸ� �Ű����� string ��ü�� �����ؿ��� ������ ��������ڸ� ȣ���ϴ� �� ��ȿ������
		//operator���� ���۷��� ������ �����Ͽ� s3.operator=(s1)�� �Ҷ� ��ü ���簡 �Ͼ�� �ʰ� ��

		//�ڱ��ڽ��� �����ϴ� ��츦 �����ϱ� ���� if
		if (this != &rhs) {//rhs�� �ּڰ�, �Ű����� &rhs�� �ٸ� �ǹ�
			delete[] strData;//s3�� ������ �𸣴� ������ �Ҵ�� �޸� �� ����
			cout << "String &operator=(const String& rhs)" << endl;
			strData = new char[rhs.len + 1];
			cout << "strData �Ҵ� : " << (void*)strData << endl;
			strcpy(strData, rhs.strData);
			len = rhs.len; //���� ����
		}

		
		return *this;//�� �Լ��� �����ִ� ��ü�� �ּڰ��� ���̴ϱ� ��ü ��ü = rhs
	}

	char* GetStrData() const {
		return strData;
	}

	int GetLen() const {
		return len;
	}
private:
	char* strData;
	int len;
};

int main() {
	String s1("�ȳ�");
	String s2(s1); //String s2 = s1;
	String s3("Hello");
	s3 = s1; //��ȣ�����ڴ� ��ȯ���� ����, int a = 5; int b; int c = b = a;���� b=a�� ��ȯ�� 5�� �Ǿ� c=5���Ǵ°���

	cout << s1.GetStrData() << endl;
	cout << s2.GetStrData() << endl;
	cout << s3.GetStrData() << endl;
}