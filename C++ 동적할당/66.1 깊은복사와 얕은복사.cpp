//66강
//얕은 복사


#include <iostream>

using namespace std;

int main() {
	int* a = new int(5);
	int* b = new int(3);


	a = b;//얕은 복사-포인팅을 바꿈 : 참조만 복사
	//실행결과:
	//a와 b가 모두 int 3을 가리키며
	//a를 delete하므로 b가 가리키던 곳도 없어져 delete b가 불가해짐


	*a = *b;//깊은 복사(a가 가리키는 값 자체를 바꿈) : 값을 복사


	delete a;
	delete b; 
}

