//�Լ� �����ε� �� �⺻��
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

//�Ű������� �߰��� �Ⱦ��� ����Ʈ �Ű������� �������ִ� ��?
//�Ʒ��Ͱ��� ���ָ� ���� �Լ� 3���� �����ѰͰ� ���� ȿ��
void getItem(int itemId, int cnt=1, int sc=0) {
	inventory[itemId] += cnt;
	score += sc;
}

//void getItem(int itemId, int cnt=1, int sc=0, int a) �Ͱ��� �����ʿ� �ִ� �Ű������� ���־�ߵ�
//void getItem(int itemId, int cnt, int sc=0, int a =1)�� ����
int main() {
	getItem(6, 5);
	getItem(1);
	getItem(11, 34, 7000);

	cout << score << endl;
	for (int i = 0; i < 16; i++) {
		cout << inventory[i] << " ";
	}
}

