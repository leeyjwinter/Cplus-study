//70강
//이동시멘틱으로 얕은 복사

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
	String(const String& rhs) {//복사 생성자
		cout << "String(const String&) : " << this << endl;
		len = rhs.len;
		alloc(len);
		strcpy(strData, rhs.strData);
	}

	String(String&& rhs) {
		cout << "String(String&&) : " << this << endl;
		len = rhs.len;
		strData = rhs.strData;//임시객체의 strData가 가리키기 시작함
		rhs.strData = NULL;//rhs에 들어가는 객체가 더이상 strData가 가리키키지 않음
	}

	~String() {
		cout << "~String() : " << this << endl;
		release();
		strData = NULL;
	}

	String& operator=(const String& rhs) { //복사 대입 연산자
		cout << "String &operator=(const String&) : " << this << endl;
		if (this != &rhs) {
			release();
			len = rhs.len;
			alloc(len);
			strcpy(strData, rhs.strData);
		}
		return *this;
	}

	// = 연산자에 얕은 복사 하도록 추가 오버로딩
	String& operator=(String&& rhs) {
		cout << "Strinf &operator=(String&&) : " << this << endl;
		len = rhs.len;
		strData = rhs.strData;
		rhs.strData = NULL;

		return *this;//a=b=c처럼 연쇄적으로 문법 사용하는 경우를 고려해야하기 때문

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
	a = getName();//res return 과정에서 res가 임시객체에 저장되고, 객체에서 다시 a로 res값을 복사해줘 깊은복사 2번 일어남
	cout << "===== 4 =====" << endl;

	//String&& r = getName(); //r-value를 참조하는 임시객체 r 생성
}