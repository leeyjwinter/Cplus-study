//��ü�� �����͸� �ٸ� ��ü�� �����ϸ� ���� ���縦 �ϰ� ��
#include <iostream>

using namespace std;

class String {
public:
	String() {
		strData = NULL;
		len = 0;
	}

	String(const char* str) {
		 //strData = str: ���� �����̴� ���� ����
		len = strlen(str);
		strData = new char[len+1];//�����Ҵ�, ���ڿ��� �迭�� �����Ҷ��� ���ڿ� ���� �ι��� ����ؼ� ���ڿ����� + 1�������
		strcpy(strData, str); // strData���ٰ� str ��������
	}

	~String() {
		delete[] strData;
	}

	char* GetStrData() const{
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
	String s;
}