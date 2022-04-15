#include <iostream>

using namespace std;

class Calcurator {
public :
	virtual int add(int a, int b) = 0; //합을 구하는 가상함수, 합을 구할 두개의 매개변수
	virtual int subtract(int a, int b) = 0; //차를 구하는 가상함수, 차를 구할 두 개의 매개변수
	virtual double average(int a[], int size) = 0; // 평균을 구하는 가상항수, 데이터가 들어있는 배열과 그 배열의 size
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

	cout << "두 수의 합은 : " << p->add(15, 20) << endl;
	cout << "두 수의 차는 : " << p->subtract(10, 20) << endl;
	cout << "배열의 평균은 : " << p->average(a, 5) << endl;

	delete p;
}