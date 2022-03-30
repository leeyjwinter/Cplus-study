//65강
//int arr[1000]; 와 같이 정적할당에 경우에는 상황에 따라 메모리 낭비일수 있음


#include <iostream>
using namespace std;

int main() {


	//배열포인터는 배열처럼 사용 가능
	for (int i = 0; i < len; i++) {
		arr[i] = len - i;
	}

	for (int i= 0; i < len; i++) {
		cout << arr[i] << endl;
	}

	//delete arr;//arr의 0번째만 delete됨
	delete[] arr;//알아서 배열 전체를 해제해줌
}