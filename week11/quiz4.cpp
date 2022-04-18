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
	Power operator+ (Power op2); // +연산자 함수 선언
};

void Power::show() {
	cout << "kick = " << kick << ", punch = " << punch << endl;
}

Power Power::operator+(Power op2) {
	Power tmp; // 임시 객체 생성
	tmp.kick = this->kick + op2.kick; //kick 더하기
	tmp.punch = this->punch + op2.punch; // punch 더하기
	return tmp; //더한 결과 리턴
}

int main() {
	Power a(3, 5);
	Power b(4, 6);
	Power c;
	c = a + b; // 파워객체의 +연산 함수 호출
	a.show();
	b.show();
	c.show();
}
*/