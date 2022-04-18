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
	bool operator== (Power op2); // ==연산자 함수 선언
};

void Power::show() {
	cout << "kick = " << kick << ", punch = " << punch << endl;
}

bool Power::operator==(Power op2) {
	if(kick == op2.kick && punch == op2.punch)
		return true; //더한 결과 리턴
}

int main() {
	Power a(3, 5);
	Power b(3, 5);
	a.show();
	b.show();
	if (a == b) // Power의 operator == 연산자 함수 호출
		cout << "두 파워가 같다." << endl;
	else
		cout << "두 파워가 같지 않다." << endl;
}
*/