//70��
//�̵��ø�ƽ���� ���� ����

#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>

using namespace std;

class String {
public:
	String() {
		cout << "String() : " << this << endl;
		strData = NULL;
		len = 0;
	}
	String(const char* str) {
		cout << "String(const char*) : " << this << endl;
		len = strlen(str);
		alloc(len);
		strcpy(strData, str);
	}
	String(const String& rhs) {//���� ������
		cout << "String(const String&) : " << this << endl;
		len = rhs.len;
		alloc(len);
		strcpy(strData, rhs.strData);
	}

	String(String&& rhs) {
		cout << "String(String&&) : " << this << endl;
		len = rhs.len;
		strData = rhs.strData;//�ӽð�ü�� strData�� ����Ű�� ������
		rhs.strData = NULL;//rhs�� ���� ��ü�� ���̻� strData�� ����ŰŰ�� ����
	}

	~String() {
		cout << "~String() : " << this << endl;
		release();
		strData = NULL;
	}

	String& operator=(const String& rhs) { //���� ���� ������
		cout << "String &operator=(const String&) : " << this << endl;
		if (this != &rhs) {
			release();
			len = rhs.len;
			alloc(len);
			strcpy(strData, rhs.strData);
		}
		return *this;
	}

	// = �����ڿ� ���� ���� �ϵ��� �߰� �����ε�
	String& operator=(String&& rhs) {
		cout << "Strinf &operator=(String&&) : " << this << endl;
		len = rhs.len;
		strData = rhs.strData;
		rhs.strData = NULL;

		return *this;//a=b=có�� ���������� ���� ����ϴ� ��츦 ����ؾ��ϱ� ����

	}

	char* GetStrData() const {
		return strData;
	}
	int GetLen() const {
		return len;
	}
	void SetStrData(const char* str) {
		release();
		len = strlen(str);
		alloc(len);
		strcpy(strData, str);
	}

private:
	void alloc(int len) {
		strData = new char[len + 1];
		cout << "strData allocated : " << (void*)strData << endl;
	}
	void release() {
		delete[] strData;
		if (strData) cout << "strData released : " << (void*)strData << endl;
	}

	char* strData;
	int len;
};

String getName() {
	cout << "===== 2 =====" << endl;
	String res("Doodle");
	cout << "===== 3 =====" << endl;
	return res;
}

int main() {
	String a;
	cout << "===== 1 =====" << endl;
	a = getName();//res return �������� res�� �ӽð�ü�� ����ǰ�, ��ü���� �ٽ� a�� res���� �������� �������� 2�� �Ͼ
	cout << "===== 4 =====" << endl;

	//String&& r = getName(); //r-value�� �����ϴ� �ӽð�ü r ����
}