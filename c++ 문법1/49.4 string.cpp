#include <iostream>
#include <string>

using namespace std;

int main() {
	//문자열을 배열 형태가 아닌 변수로 저장함
	string str;
	str = "Hello";

	//긴 문자열 사용 가능
	str = "sklfdjsldfkjsldkfjlsdfjlksdflsjdklflks";

	//string형 합치기 훨씬 수월
	string name;
	cout << "이름 입력 : ";
	cin >> name;
	string message = "안녕하세요, " + name + "님";
	cout << message << endl;
}
