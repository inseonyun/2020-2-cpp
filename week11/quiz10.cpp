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
	Power operator++(int x); // ����++ ������ �Լ� ����
	// �Ű������� ������ �����ϱ� ���ؼ� ������, ����� �� ��
};

void Power::show() {
	cout << "kick = " << kick << ", punch = " << punch << endl;
}

Power Power::operator++(int x) {
	Power tmp = *this; //���� ���� ��ü ���� ����
	kick++;
	punch++;
	return tmp;
}

int main() {
	Power a(3, 5);
	Power b;
	a.show();
	b.show();
	b = a++; //���� ������ �Լ� ȣ��
	a.show(); // a�� �Ŀ��� 1������ (������ a++ ����߱⶧��)
	b.show(); // b�� a�� �����Ǳ� ���� ���¸� ���� 
}
*/