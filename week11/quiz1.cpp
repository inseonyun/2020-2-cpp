/*
# include <iostream>

using namespace std;

class Rect;	//Rect 클래스가 선언되기 전에 먼저 참조 되는 컴파일 오류를 막기 위함
bool equals(Rect r, Rect s); // equals 함수 선언

class Rect {
	int width, height;
public :
	Rect(int width, int height) {
		this->width = width;
		this->height = height;
	}
	friend bool equals(Rect r, Rect s); //equals 함수를 프렌드로 선언
};
bool equals(Rect r, Rect s) {
	//외부 함수
	if (r.width == s.width && r.height == s.height)
		return true;
	else
		return false;
}

int main() {
	Rect a(3, 4);
	Rect b(4, 5);
	if (equals(a, b))
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;
}
*/