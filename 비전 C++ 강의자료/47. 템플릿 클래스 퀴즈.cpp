#include <iostream>

using namespace std;

template<typename TYPE>
class list {
	TYPE data;
	list* pNext;
public:
	list(int a) {
		data = a;
		pNext = NULL;
	}
	void add(list* pNode) {
		pNode->pNext = this;
		pNext = NULL;
	}
	list* getNext() {
		return pNext;
	}
	int getData() {
		return data;
	}
};

int main() {
	list<int> List1(0);
	list<int>* pNode, * pLast;

	pLast = &List1;
	for (int i = 1; i <= 10; i++) {
		pNode = new list<int>(i);
		pNode->add(pLast);
		pLast = pNode;
	}

	pNode = &List1;
	while (pNode) {
		cout << pNode->getData() << endl;
		pNode = pNode->getNext();
	}
}