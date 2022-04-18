#include <iostream>

using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) { //ű�� ��ġ 0���� �ʱ�ȭ
		this->kick = kick;
		this->punch = punch;
	}
	void show();
	friend Power operator++(Power& op); // ���� ++ ������ �Լ� ������ ����
	friend Power operator++(Power& op, int x); //���� ++ ������ �Լ� ������ ����
};

void Power::show() {
	cout << "kick = " << kick << ", punch = " << punch << endl;
}

Power operator++(Power& op) {
	//���� ++ ������ �Լ� ����
	op.kick++;
	op.punch++;
	return op; //���� ��� ����
}
Power operator++(Power& op, int x) {
	//���� ++ ������ �Լ� ����
	Power tmp = op;
	op.kick++;
	op.punch++;
	return tmp; //���� ������ �� ����
}

int main() {
	Power a(3, 5);
	Power b;
	b = ++a; //���� ++ ������ �Լ� ȣ��
	a.show();
	b.show();

	b = a++; // ���� ++ ������ �Լ� ȣ��
	a.show();
	b.show();
}
