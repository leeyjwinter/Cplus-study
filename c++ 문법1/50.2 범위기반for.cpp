//범위기반 for문

#include <iostream>

using namespace std;

int main() {
	int arr[10] = { 3,1,4,5,3,6,7,4,5,1 };

	for (int i = 0; i < 10; i++) {
		cout << arr[i];
	}
	cout << endl;

	//n의 값이 arr의 한 칸 씩을 차지하게 함
	
	for (int n : arr) {
		cout << n ;
		n++;
	}

	//n은 arr의 값을 참조하는 것이므로 n의 값을 바꾼다고 arr값이 바뀌지는 않음
	//따라서 n++이 적용되지 않음
	cout << endl;
	for (int n : arr) {
		cout << n ;
	}

	//레퍼런스 변수를 사용해서 값을 바꿔주면 n++이 적용됨
	cout << endl;
	for (int &n : arr) {
		cout << n;
		n++;
	}

	cout << endl;
	for (int n : arr) {
		cout << n;
	}
}


