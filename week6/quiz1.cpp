#include <iostream>

using namespace std;

void main1() {
	char name[10];				//�л� �̸� ����
	int kor, eng, mat, sum = 0;	//���� ���� ���� ���� ����
	double avg;					//��� ����
	char cred;					//���� ����
	bool res;				//�հ� ���հ� ����

	cout << "�̸��� �Է��ϼ���:";
	cin >> name;
	cout << "1) ���� ������ �Է��ϼ���:";
	cin >> kor;
	cout << "2) ���� ������ �Է��ϼ���:";
	cin >> mat;
	cout << "3) ���� ������ �Է��ϼ���:";
	cin >> eng;

	sum = kor + mat + eng;	//������ �� ������ ���� ���Ͽ� ����
	avg = sum / 3.0;		//��տ� ���� / 3.0 (����� �Ǽ�) ����
	
	if (avg >= 90) {
		cred = 'A';
		res = true;
	}
	else if (avg >= 80) {
		cred = 'B';
		res = true;
	}
	else if (avg >= 70) {
		cred = 'C';
		res = true;
	}
	else if (avg >= 60) {
		cred = 'D';
		res = false;
	}
	else {
		cred = 'F';
		res = false;
	}
	//�Ҽ����� ���ڸ������� ����ϰ� ������
	cout.setf(ios::fixed);
	//Ȥ�� cout<<fixed; 
	cout.precision(2);
	 
	cout << endl << "[" << name << "]���� ������ �������� [" << kor << "], �������� [" << mat << "], �������� [" << eng << "]�̰�," << endl;
	cout << "���� [" << sum << "], ��� [" << avg << "], ���� [" << cred << "]����" << endl;
	if(res)
 		cout << "���� ���迡 [�հ�] �Ͽ����ϴ�." << endl;
	else
		cout << "���� ���迡 [���հ�] �Ͽ����ϴ�." << endl;
}