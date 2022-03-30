#include <iostream>
using namespace std;

class NPC {
	int defense;

public:
	void SetDefense(int n);
	int GetDefense();
};

class Grunt : public NPC {
	int armor;

public:
	void SetArmor(int n);
	int GetArmoredDefense();
};

void NPC::SetDefense(int n) {
	defense = n;
}

int NPC::GetDefense() {
	return defense;
}

void Grunt::SetArmor(int n) {

	armor = n;
}

int Grunt::GetArmoredDefense() {
	return armor + GetDefense();
}

int main() {
	Grunt oUnit;
	oUnit.SetDefense(10);
	oUnit.SetArmor(20);

	cout << "Get Armored Defense : " << oUnit.GetArmoredDefense() << "\n";
	return 0;
}