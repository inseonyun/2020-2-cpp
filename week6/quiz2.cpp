#include <iostream>

using namespace std;

class student { 
	//�̸�, ������ ����, ����, ���, ���� ����
	char name[10];
	int kor, mat, eng;
	int total = 0;
	double avg;
	char cred;

public :
	void setInfo() { //�޼ҵ� ���� ����
		cout << "�̸��� �Է��ϼ���:";
		cin >> name;
		cout << "1) ���� ������ �Է��ϼ���:";
		cin >> kor;
		cout << "2) ���� ������ �Է��ϼ���:";
		cin >> mat;
		cout << "3) ���� ������ �Է��ϼ���:";
		cin >> eng;
	}
	void setTotal();
	void setAvg();
	void setCred();
	void print_all();
};
//���� ��� ���� �հݿ��� �� ��� ��� �ܺ� ����
void student::setTotal() {
	total = kor + mat + eng;
}
void student::setAvg() {
	avg = total / 3.0;
}
void student::setCred() {
	if(avg >= 90) 
		cred = 'A';
	else if (avg >= 80) 
		cred = 'B';
	else if (avg >= 70) 
		cred = 'C';
	else if (avg >= 60) 
		cred = 'D';
	else 
		cred = 'F';
}
void student::print_all() {
	//�Ҽ����� ���ڸ������� ����ϰ� ������
	cout.setf(ios::fixed);
	cout.precision(2);

	cout << endl << "[" << name << "]���� ������ �������� [" << kor << "], �������� [" << mat << "], �������� [" << eng << "]�̰�," << endl;
	cout << "���� [" << total << "], ��� [" << avg << "], ���� [" << cred << "]����" << endl;
	if (avg >= 70)
		cout << "���� ���迡 [�հ�] �Ͽ����ϴ�." << endl;
	else
		cout << "���� ���迡 [���հ�] �Ͽ����ϴ�." << endl;

}

void main2() {
	student s1;
	s1.setInfo();
	s1.setTotal();
	s1.setAvg();
	s1.setCred();
	s1.print_all();
}