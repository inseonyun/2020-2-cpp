#include <iostream>

using namespace std;

class Calcurator {
public :
	virtual int add(int a, int b) = 0; //���� ���ϴ� �����Լ�, ���� ���� �ΰ��� �Ű�����
	virtual int subtract(int a, int b) = 0; //���� ���ϴ� �����Լ�, ���� ���� �� ���� �Ű�����
	virtual double average(int a[], int size) = 0; // ����� ���ϴ� �����׼�, �����Ͱ� ����ִ� �迭�� �� �迭�� size
};

class subCalc : public Calcurator {
public :
	virtual int add(int a, int b) {
		return a + b;
	}
	virtual int subtract(int a, int b) {
		return a - b;
	}
	virtual double average(int a[], int size) {
		double sum = 0;
		for (int i = 0; i < size; i++) {
			sum += a[i];
		}
		return sum / size;
	}
};
void main1() {
	int a[] = { 10, 20, 30, 40, 50 };
	subCalc *p = new subCalc();

	cout << "�� ���� ���� : " << p->add(15, 20) << endl;
	cout << "�� ���� ���� : " << p->subtract(10, 20) << endl;
	cout << "�迭�� ����� : " << p->average(a, 5) << endl;

	delete p;
}