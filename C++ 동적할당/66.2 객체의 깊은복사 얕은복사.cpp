//객체의 포인터를 다른 객체로 복사하면 얕은 복사를 하게 됨
#include <iostream>

using namespace std;

class String {
public:
	String() {
		strData = NULL;
		len = 0;
	}

	String(const char* str) {
		 //strData = str: 얕은 복사이니 하지 말것
		len = strlen(str);
		strData = new char[len+1];//동적할당, 문자열을 배열에 저장할때는 문자열 끝의 널문자 고려해서 문자열길이 + 1해줘야함
		strcpy(strData, str); // strData에다가 str 깊은복사
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