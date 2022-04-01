#define MAX_SIZE 50
#include <iostream>

using namespace std;

template <typename TYPE>
class stack {
	TYPE data[MAX_SIZE];
	int nCount;

public:
	stack() { nCount = 0; }
	void add(TYPE in) {
		data[nCount++] = in;
		if (nCount == MAX_SIZE) {
			cout << "overflow : " << nCount << endl;
		}
	}
	TYPE pop() {
		if (nCount <= 0) {
			cout << "empty" << endl;
			return data[0];
		}
		else {
			return data[--nCount];
		}

	}
};

int main() {
	stack<int> stack1;
	stack<float> stack2;
	int i;
	float j;

	for (i = 0; i < 10; i++)
		stack1.add(i);

	for (j = 0; j < 10; j += .4)
		stack2.add(j);

	for (i = 0; i < 10; i++)
		cout << stack1.pop() << " ";
	cout << endl;
	for (i = 0; i < 10; i++)
		cout << stack2.pop() << " ";
}