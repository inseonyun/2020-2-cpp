#include <iostream>

using namespace std;

class Point {
	int x, y;
public:
	void set(int x, int y) {
		this->x = x;	//class 멤버 변수 x에 매개변수 x를 대입
		this->y = y;	//class 멤버 변수 y에 매개변수 y를 대입
	}
	void showPoint() {	//class 멤버 변수 x와 y 출력
		cout << "(" << x << "," << y << ")" << endl;
	}
};
class ColorPoint : public Point {
	string color;

public:
	void setColor(string color) {	//class 멤버 변수 color에 매개변수 color 대입
		this->color = color;
	}
	void showColorPoint();			//메소드 함수 선언
};
void ColorPoint::showColorPoint() {	//외부에서 메소드 함수 정의
	cout << color << ":";			//컬러 출력
	showPoint();					//이후 출력은 Point와 같기에 point의 출력문 사용
}

void main() {
	Point p;
	ColorPoint cp;

	p.set(10, 20);
	p.showPoint();

	cp.set(3, 4);					//객체 변수가 다르므로 변수 초기화를 해줘야 원하는 값이 나옴
	cp.setColor("Red");
	cp.showColorPoint();
	
}