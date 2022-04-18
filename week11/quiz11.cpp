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
	friend Power operator+(int op1, Power op2); // 프렌드 선언
};

void Power::show() {
	cout << "kick = " << kick << ", punch = " << punch << endl;
}

Power operator+(int op1, Power op2) {
	Power tmp; //임시 객체 생성
	tmp.kick = op1 + op2.kick;	//정수와 kick 더하기
	tmp.punch = op1 + op2.punch; //정수와 punch 더하기
	return tmp;	//결과값인 tmp 객체 리턴
}

int main() {
	Power a(3, 5);
	Power b;
	a.show();
	b.show();
	b = 2 + a; //파워 객체 더하기 연산 -> +연산자 함수 호출
	a.show();
	b.show();
}
*/