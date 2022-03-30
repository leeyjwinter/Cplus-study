//57강: 생성자 초기화 목록 간편하게 사용

#include <iostream>

using namespace std;

//복소수 저장 클래스 실습(real-실수, imag-허수)

class Complex {
public:
	Complex() : real(0), imag(0) {	}
	//변수 초기와를 위의 형식으로 가능

	Complex(double real_, double imag_) : real(real_), imag(imag_) { }

	//real(real)의 첫번쨰 real은 무조건 멤버변수 real이므로 굳이 위처럼 구분안해도됨
	Complex(double real, double imag) : real(real), imag(imag) { }

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
	int a(5);

	Complex c1;//Complex(double real_=0, double imag_=0)과 같이 디폴트를 해주면
	//매개변수를 0개를 받을 수 있는 생성자가 2개라 오류발생

	Complex c2 = Complex(2,3);
	Complex c3(2, 3); 

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