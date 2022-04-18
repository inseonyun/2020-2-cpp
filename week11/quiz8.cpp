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
	Power operator++(); // 전위 ++ 연산자 함수 선언
};

void Power::show() {
	cout << "kick = " << kick << ", punch = " << punch << endl;
}

Power Power::operator++() {
	kick++;
	punch++;
	return *this; // 변경된 객체 자신 리턴
}

int main() {
	Power a(3, 5);
	Power b;
	a.show();
	b.show();
	b = ++a; // 전위 ++연산자 사용
	a.show();
	b.show();
}
*/