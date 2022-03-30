//69강
//깊은 복사의 단점: 데이터가 클 수록 많은 메모리를 잡아먹으면서 복사함
//얕은 복사를 하되, 소멸자를 한번만 호출되도록 할 수 있을까? > 객체를 이동시키는 방식으로 해결 = 이동시멘틱

//rvalue: 등호의 우변에만 올 수 있는 값 ex) a = 5 ㄱㅊ, 5= a; 안됨, 5는 따라서 r-value, r-value아니면 l-value임
//l-value
//임시객체는 rvalue다! 

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

	String&& r = getName(); //r-value를 참조하는 임시객체 r 생성
}