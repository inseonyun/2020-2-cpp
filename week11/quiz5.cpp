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
	bool operator== (Power op2); // ==������ �Լ� ����
};

void Power::show() {
	cout << "kick = " << kick << ", punch = " << punch << endl;
}

bool Power::operator==(Power op2) {
	if(kick == op2.kick && punch == op2.punch)
		return true; //���� ��� ����
}

int main() {
	Power a(3, 5);
	Power b(3, 5);
	a.show();
	b.show();
	if (a == b) // Power�� operator == ������ �Լ� ȣ��
		cout << "�� �Ŀ��� ����." << endl;
	else
		cout << "�� �Ŀ��� ���� �ʴ�." << endl;
}
*/