#include <iostream>

using namespace std;

class Ex {
public:
	virtual void prt() = 0;
};

class Ex1 : public Ex {
	char ch;
	int n, count = 0;
public:
	Ex1() {
		cout << "��ȣ�� �Է��ϼ��� : ";
		cin >> this->ch;
		cout << "�ݺ� Ƚ���� �Է��ϼ���. ";
		cin >> this->n;
	}
	void prt() {
		for (int i = 0; i < n; i++) {
			cout << ch << " ";
		}
		cout << "(" << n << ")\n";
	}
};


int main() {
	Ex2* e1 = new Ex2();
	e1->prt();
}