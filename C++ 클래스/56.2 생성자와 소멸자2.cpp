//56강 언제 생성자와 소멸자를 쓰는가?
//생성자: 멤버 변수 초기화
//소멸자: 메모리 해제

#include <iostream>

using namespace std;

//복소수 저장 클래스 실습(real-실수, imag-허수)

class Complex {
public:
	Complex() {
		real = 0;
		imag = 0;
	}
	Complex(double real_, double imag_) {
		real = real_;
		imag = imag_;
	}
	double GetReal() {
		return real;
	}
	void SetReal(double real_) {
		real = real_;
	}
	double GetImag() {
		return imag;
	}
	void SetImag(double imag_) {
		imag = imag_;
	}
private:
	double real;
	double imag;
};

int main() {
	Complex c1;//c1이 생성될 때 두개의 오버로딩된 생성자 중 매개변수 없는 생성자만 실행됨
	Complex c2 = Complex(2, 3);//c2는 두번째 생성자가 호출됨
	Complex c3(2, 3); //c2와 같은 의미

	//중괄호를 사용한 초기화도 가능
	Complex c4 = { 2,3 };
	Complex c5 = Complex{ 2,3 };
	Complex c6{ 2,3 };


	cout << "c1 = " << c1.GetReal() << "," << c1.GetImag() << endl;
	cout << "c2 = " << c2.GetReal() << "," << c2.GetImag() << endl;
	cout << "c3 = " << c3.GetReal() << "," << c3.GetImag() << endl;
	cout << "c4 = " << c4.GetReal() << "," << c4.GetImag() << endl;
	cout << "c5 = " << c5.GetReal() << "," << c5.GetImag() << endl;
	cout << "c6 = " << c6.GetReal() << "," << c6.GetImag() << endl;

}