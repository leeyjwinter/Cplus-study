//68강 대입 연산자로 객체 복사
//s3 = s1

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

	//대입 연산자
	String &operator=(const String &rhs) { //&rhs가 아닌 rhs라고 쓴다면 매개변수 string 객체를 복사해오기 때문에 복사생성자를 호출하는 등 비효율적임
		//operator역시 레퍼런스 변수로 설정하여 s3.operator=(s1)을 할때 객체 복사가 일어나지 않게 함

		//자기자신을 복사하는 경우를 방지하기 위한 if
		if (this != &rhs) {//rhs의 주솟값, 매개변수 &rhs와 다른 의미
			delete[] strData;//s3에 있을지 모르는 이전에 할당된 메모리 값 해제
			cout << "String &operator=(const String& rhs)" << endl;
			strData = new char[rhs.len + 1];
			cout << "strData 할당 : " << (void*)strData << endl;
			strcpy(strData, rhs.strData);
			len = rhs.len; //깊은 복사
		}

		
		return *this;//이 함수가 속해있는 객체의 주솟값의 값이니까 객체 자체 = rhs
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
	String s3("Hello");
	s3 = s1; //등호연산자는 반환값이 있음, int a = 5; int b; int c = b = a;에서 b=a의 반환이 5가 되어 c=5가되는것임

	cout << s1.GetStrData() << endl;
	cout << s2.GetStrData() << endl;
	cout << s3.GetStrData() << endl;
}