#include <iostream>

using namespace std;

void f01() {
	//5���� �Ǽ��� �Է¹޾� ���� ū �� ���
	int i;
	double dou[5];
	double max = 0;

	cout << "5���� �Ǽ��� �Է��ϼ��� : ";
	
	for (i = 0; i < sizeof(dou) / sizeof(double); i++) {
		cin >> dou[i];
		if (dou[i] > max)
			max = dou[i];
	}
	cout << "���� ū ���� " << max << "�Դϴ�.\n";
	
}

void f02() {
	/*���� Ű�� �Էµ� ������ ���� ���ڿ��� �Է��ϰ�,
	 �� �� ���� 's' or 'S'�� �Էµ� ���� ���*/
	char str[51];
	int i, count = 0;

	cout << "���� ���ڿ� �Է�(50��) : ";
	cin.getline(str, 51, '\n');

	for (i = 0; str[i]; i++) {
		if (str[i] == 's' || str[i] == 'S')
			count++;
	}
	cout << "�Էµ� s�� ���� : " << count;
}

void f03() {
	//3���� �̸��� '(��ǥ),'�� �����Ͽ� �Է¹޾� ����ϱ�
	char name[50];
	int i;

	cout << "3���� �̸��� �Է��ϼ��� : ";

	for (i = 0; i < 3; i++) {
		cin.getline(name, 50, ',');
		cout << i + 1 << ": " << name << endl;
	}
}

void f04() {
	//���ڿ��� �Է¹޾� 'hello' h, he, hel ���� ����ض�.
	char str[50];
	int i, j;
	
	cout << "���ڿ��� �Է��ϼ��� : ";
	cin >> str;

	for (i = 0; i < str[i]; i++) {
		for (j = 0; j <= i; j++) {
			cout << str[j];
		}
		cout << endl;
	}
}

void f05() {
	//���ڿ��� �Է� ������ ��, ������ ���� ���
	char str[50];
	char mc[5] = { 'A', 'E', 'I', 'O', 'U' };
	int count[5] = { 0, };
	int i, j;

	cout << "���ڿ��� �Է��ϼ��� : ";
	cin.getline(str, 50, '\n');

	for (i = 0; str[i]; i++) {
		if (str[i] == 'a' || str[i] == 'A')
			count[0]++;
		else if(str[i] == 'e' || str[i] == 'E')
			count[1]++;
		else if (str[i] == 'i' || str[i] == 'I')
			count[2]++;
		else if (str[i] == 'o' || str[i] == 'O')
			count[3]++;
		else if (str[i] == 'u' || str[i] == 'U')
			count[4]++;
	}
	for (i = 0; i < sizeof(count) / sizeof(int); i++) {
		cout << mc[i] << ": ";
		for (j = 0; j < count[i]; j++) {
			cout << "��";
		}
		cout << "(" << count[i] << ")\n";
	}
}