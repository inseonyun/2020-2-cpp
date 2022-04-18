/*
#include <iostream>

using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) { //킥과 펀치 0으로 초기화
		this->kick = kick;
		this->punch = punch;
	}
	void show();
	Power operator++(int x); // 후위++ 연산자 함수 선언
	// 매개변수는 전위와 구분하기 위해서 적으며, 사용은 안 함
};

void Power::show() {
	cout << "kick = " << kick << ", punch = " << punch << endl;
}

Power Power::operator++(int x) {
	Power tmp = *this; //증가 이전 객체 상태 저장
	kick++;
	punch++;
	return tmp;
}

int main() {
	Power a(3, 5);
	Power b;
	a.show();
	b.show();
	b = a++; //후위 연산자 함수 호출
	a.show(); // a의 파워는 1증가됨 (위에서 a++ 사용했기때문)
	b.show(); // b는 a가 증가되기 이전 상태를 가짐 
}
*/