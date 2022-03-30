//68강 대입 연산자로 객체 복사

#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <string>


using namespace std;

class String {
public:
	String() {
		cout << "String() 생성자 호출" << endl;
		strData = NULL;
		len = 0;
	}

	String(const char* str) {
		cout << "String(const char* 생성자 호출)" << endl;
		len = strlen(str);
		strData = new char[len + 1];
		cout << "strData 할당 : " << (void*)strData << endl;/*문자열이 아닌 주솟값의 strData라는 의미*/
		strcpy(strData, str);
	}

	//복사 생성자
	String(const String& rhs) {
		//strData = rhs.strData; //얕은 복사
		cout << "String(const String& rhs)" << endl;
		strData = new char[rhs.len + 1];
		cout << "strData 할당 : " << (void*)strData << endl;
		strcpy(strData, rhs.strData);
		len = rhs.len; //깊은 복사
	}
	~String() {
		cout << "~String() 소멸자 호출" << endl;
		delete[] strData;
		cout << "strData 해제됨 : " << (void*)strData << endl;
		strData = NULL; //해제된 메모리의 접근을 막는 것
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
	String s1("안녕");
	String s2(s1); //String s2 = s1;

	cout << s1.GetStrData() << endl;
	cout << s2.GetStrData() << endl;
}