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
	friend Power operator++(Power& op); // 전위 ++ 연산자 함수 프렌드 선언
	friend Power operator++(Power& op, int x); //후위 ++ 연산자 함수 프렌드 선언
};

void Power::show() {
	cout << "kick = " << kick << ", punch = " << punch << endl;
}

Power operator++(Power& op) {
	//전위 ++ 연산자 함수 구현
	op.kick++;
	op.punch++;
	return op; //연산 결과 리턴
}
Power operator++(Power& op, int x) {
	//후위 ++ 연산자 함수 구현
	Power tmp = op;
	op.kick++;
	op.punch++;
	return tmp; //변경 이전의 값 리턴
}

int main() {
	Power a(3, 5);
	Power b;
	b = ++a; //전위 ++ 연산자 함수 호출
	a.show();
	b.show();

	b = a++; // 후위 ++ 연산자 함수 호출
	a.show();
	b.show();
}
