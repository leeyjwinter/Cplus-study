#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

void printStar(int a) {
	for (int i = 0; i < a; i++) {
		cout << "*";
	}
	cout << endl;
}

void printStar(char b) {
	int c = b-'0';
	for (int i = 0; i < c; i++) {
		cout << "*";
	}
	cout << endl;
}

int main() {
	int a;
	char b;

	printf("Int : ");
	scanf("%d", &a);
	printf("Char : ");
	scanf("%*c%c", &b);

	printStar(a);
	printStar(b);
}