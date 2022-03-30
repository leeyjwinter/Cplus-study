//54강
// 
//struct 와 class의 차이?
//class는 자료저장 + 자료처리 = 변수 + 함수
//클래스: 특정한 용도를 수행하기 위한 변수와 함수를 모아둔 틀(자료형)
//int a 에서 int는 타입, a는 객체
//클래스를 타입, 클래스로 찍어낸 것을 객체(오브젝트)라고 함

 
#include <iostream>

using namespace std;

struct TV {

private://struct 일때는 private: 안써주면 기본값은 public, class는 기본값이 private
	bool powerOn;
	int channel;
	int volume;

	//만약 볼륨이 최대가 10이었다면?? 문제발생함
	//이를 방지위해 함수 만듦

public:
	void On() {
		powerOn = true;
		cout << "TV를 켰습니다." << endl;
	}

	void Off() {
		powerOn = false;
		cout << "TV를 껐습니다." << endl;
	}

	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100)
			volume = vol;
		cout << "볼륨을 " << volume << "(으)로 바꿨습니다" << endl;

	}

	void setChannel(int cnl) {
		if (cnl >=1 && cnl <=999)
			channel = cnl;
		cout << "채널을 " << channel << "(으)로 바꿨습니다" << endl;
	}
};

int main() {
	TV lg;
	//lg.powerOn = true;
	//lg.channel = 10;
	lg.setVolume(50);
	//setVolume함수로 volume을 안전하게 제어하는 코드를 만듦
	// 그럼에도 불구하고 volume을 struct밖에서 마음대로 바꿀 수 있음
	//private, public을 이용하면 됨

	lg.On();
	lg.Off();
	lg.setChannel(50);
}

