#include <iostream>
#include <vector>
using namespace std;

int FindMaxNumber(vector<int> argGrade) {
	int size = argGrade.size();
	int max = argGrade[0];
	int maxIndex = 0;
	for (int i = 0; i < size; i++) {
		if (argGrade[i] > max) {
			max = argGrade[i];
			maxIndex = i;
		}
	}
	return maxIndex;
}

void main() {
	vector<int> aGrade = { 90,88,85,55,47,92,87,30,89,65 };
	int maxGradeIndex = 0;

	maxGradeIndex = FindMaxNumber(aGrade);

	cout << "Best Grade = " << aGrade[maxGradeIndex] << "\n";
	cout << "StudentID= " << maxGradeIndex + 1 << "\n";
}