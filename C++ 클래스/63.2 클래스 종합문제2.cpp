//1.아래의 GameWindow 클래스의 코드에서 창 너비와 높이를 매개변수로 받는 ResizeWindow 함수를 추가
//다음 조건과 같이 width 와 height의 값을 바꿀 수 있도록 작성
//-너비가 800보다 작거나 높이가 600보다 작을 때는 각각 800,600으로 설정할 것
//
//2. GameWindow::GameWindow(int w, int h) 생성자도 마찬가지로 조건을 만족하도록 수정
//
//3. 작성한 코드에서 상수화가 가능한 부분은 모두 상수화



#include <iostream>

using namespace std;

class GameWindow{
public:
	GameWindow();
	GameWindow(const int,const int);
	int GetWidth() const;
	int GetHeight() const;
	void ResizeWindow(const int,const int);//멤버변수가 변하는 메서드이므로 const 바꾸기 x

private:
	int width;
	int height;
};

GameWindow::GameWindow() : width(800), height(600){}
GameWindow::GameWindow(const int w,const int h) {
	ResizeWindow(w, h);
}

int GameWindow::GetWidth() const { return width; }
int GameWindow::GetHeight() const { return height; }
void GameWindow::ResizeWindow(const int w,const int h){
	width = w;
	height = h;
	if (w < 800) {
		width = 800;
	}
	if (h < 600) {
		height = 600;
	}
}

int main() {
	GameWindow mainWindow;
	mainWindow.ResizeWindow(1366, 768);
	GameWindow newWindow(500, 768);
	cout << mainWindow.GetWidth() << "x" << mainWindow.GetHeight() << endl;
	cout << newWindow.GetWidth() << "x" << newWindow.GetHeight() << endl;
}