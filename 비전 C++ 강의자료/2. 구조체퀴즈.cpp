#include <iostream>

using namespace std;

struct Drink {
	int Sprite = 10;
	int Coke = 10;
};

struct Food {
	int Rice = 10;
	int Pizza = 10;
};

int main() {
	Drink drk;
	Food fd;

	while (1) {
		int answer = -1;
		cout << "Order (0: Drink, 1: Food, 2: Quit) : ";
		cin >> answer;

		if (answer == 0) {
			int drinkAnswer = -1;
			cout << "Drink(0: Coke, 1 : Sprite) : ";
			cin >> drinkAnswer;
			if (drinkAnswer == 0) {
				drk.Coke--;
			}
			else
				drk.Sprite--;
		}

		else if (answer == 1) {
			int foodAnswer = -1;
			cout << "Food(0: Rice, 1 : Pizza) : ";
			cin >> foodAnswer;
			if (foodAnswer == 0) {
				fd.Rice--;
			}
			else
				fd.Pizza--;
		}

		else if(answer ==2){
			break;
		}

		cout << "Remaining: Coke = " << drk.Coke << ", Sprite = " << drk.Sprite << ", RIce = " << fd.Rice << ",Pizza = " << fd.Pizza << "\n";

	}
}