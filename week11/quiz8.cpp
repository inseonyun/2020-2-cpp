/*
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
	Power operator++(); // ���� ++ ������ �Լ� ����
};

void Power::show() {
	cout << "kick = " << kick << ", punch = " << punch << endl;
}

Power Power::operator++() {
	kick++;
	punch++;
	return *this; // ����� ��ü �ڽ� ����
}

int main() {
	Power a(3, 5);
	Power b;
	a.show();
	b.show();
	b = ++a; // ���� ++������ ���
	a.show();
	b.show();
}
*/