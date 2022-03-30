//65강 
// 동적할당: 프로그램 실행 중에 메모리를 할당받아 사용하거나 풀어줌
//정적 할당: int a; 프로그림이 시작할 때 생기고 끝날 때 사라짐

#include <iostream>

using namespace std;

int main() {
	int* a = new int(5); //new는 5가 저장된 주소값 반환

	cout << a << endl;
	cout << *a << endl;

	*a = 10;

	cout << a << endl;
	cout << *a << endl;

	delete a;//메모리 공간 해제 해줘야 함
}