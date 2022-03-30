//함수 오버로딩 및 기본값
#include <iostream>

using namespace std;


int inventory[64] = { 0 };
int score = 0;


void getItem(int itemId) {
	inventory[itemId]++;

}

void getItem(int itemId, int cnt) {
	inventory[itemId]+=cnt;
}

void getItem(int itemId, int cnt, int sc) {
	inventory[itemId] += cnt;
	score += sc;
}

//매개변수를 추가로 안쓰면 디폴트 매개변수로 적용해주는 법?
//아래와같이 해주면 위에 함수 3개를 정의한것과 같은 효과
void getItem(int itemId, int cnt=1, int sc=0) {
	inventory[itemId] += cnt;
	score += sc;
}

//void getItem(int itemId, int cnt=1, int sc=0, int a) 와같이 오른쪽에 있는 매개변수는 차있어야됨
//void getItem(int itemId, int cnt, int sc=0, int a =1)은 가능
int main() {
	getItem(6, 5);
	getItem(1);
	getItem(11, 34, 7000);

	cout << score << endl;
	for (int i = 0; i < 16; i++) {
		cout << inventory[i] << " ";
	}
}

