//함수 오버로딩
//두들낙서 c++ 51강
#include <iostream>

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void swap(double& a, double& b) {
	double tmp = a;
	a = b;
	b = tmp;
}


void swap(int* (&a), int* (&b)) {//포인터를 가리키는 레퍼런스변수 a,b
	int* tmp = a;
	a = b;
	b = tmp;

}
int main() {
	int a = 20, b = 30;
	double da = 2.222, db = 3.333;
	int* pa = &a, * pb = &b;

	//매개변수 형에 따라서 함수를 여러가지로 정의할 수 있음
	swap(a, b);
	swap(da, db);
	swap(pa, pb);

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;

	std::cout << "da : " << da << std::endl;
	std::cout << "db : " << db << std::endl;

	std::cout << "*pa : " << *pa << std::endl;
	std::cout << "*pb : " << *pb << std::endl;


}