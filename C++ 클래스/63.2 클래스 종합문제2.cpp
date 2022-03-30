//1.�Ʒ��� GameWindow Ŭ������ �ڵ忡�� â �ʺ�� ���̸� �Ű������� �޴� ResizeWindow �Լ��� �߰�
//���� ���ǰ� ���� width �� height�� ���� �ٲ� �� �ֵ��� �ۼ�
//-�ʺ� 800���� �۰ų� ���̰� 600���� ���� ���� ���� 800,600���� ������ ��
//
//2. GameWindow::GameWindow(int w, int h) �����ڵ� ���������� ������ �����ϵ��� ����
//
//3. �ۼ��� �ڵ忡�� ���ȭ�� ������ �κ��� ��� ���ȭ



#include <iostream>

using namespace std;

class GameWindow{
public:
	GameWindow();
	GameWindow(const int,const int);
	int GetWidth() const;
	int GetHeight() const;
	void ResizeWindow(const int,const int);//��������� ���ϴ� �޼����̹Ƿ� const �ٲٱ� x

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