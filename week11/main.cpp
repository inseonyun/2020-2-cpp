#include <iostream>
#include <cstring>

using namespace std;

namespace arr {
	string* str;
	string m[] = { "����", "������ ���", "�λ�", "�ؾ� ���", "��õ", "���� �ǰ� ���" };
}

class up {
public:
	virtual void input() = 0;
	virtual string cmp(string s) = 0;
	virtual void output() = 0;
};

class down : public up {
	int n;	//�Է��� ������ ���� ����
public:
	void input() {
		while (true) {
			try {
				cout << "�Է��� ������ ����� �ּ��� : ";
				cin >> n;
				if (n <= 0)
					throw n;
				else
					break;
			}
			catch (int n) {
				cout << "�Էµ� ������ �����̰ų� 0 �Դϴ�. �ٽ� �Է����ּ���.\n";
				continue;
			}
		}
		//�Է¹��� ���� �迭 ũ�� ����
		arr::str = new string[n];

		//�� �������� �Է� ����
		for (int i = 0; i < n; i++) {
			cout << "[" << i << "] ������ : ";
			cin >> arr::str[i];
		}
	}

	//���� ���� ������ �´� Ư��ȭ ������ ������
	string cmp(string s) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < sizeof(arr::m); j += 2) {
				if (s.compare(arr::m[j]) == 0)
					return arr::m[j + 1];
			}
		}
	}

	//���� ���
	void output() {
		cout << "\n�� ���ú� Ư��ȭ �����Դϴ�." << endl;
		for (int i = 0; i < n; i++) {
			cout << "[" << arr::str[i] << "]�� " << cmp(arr::str[i]) << "�� �ߴ޵� �����Դϴ�.\n";
		}
		cout << "�̻� [" << n << "]�� �����Դϴ�.\n";
	}
};
int main() {
	down d;
	d.input();
	d.output();
}

/*
int main() {
	int n;
	string *str;
	string m[] = { "����", "������ ���", "�λ�", "�ؾ� ���", "��õ", "���� �ǰ� ���" };

	while (true) {
		try {
			cout << "�Է��� ������ ����� �ּ��� : ";
			cin >> n;
			if (n <= 0)
				throw n;
			else
				break;
		}
		catch (int n) {
			cout << "�Էµ� ������ �����̰ų� 0�Դϴ�. �ٽ� �Է����ּ���.\n";
			continue;
		}
	}
	str = new string[n];	//�Է¹��� ���� �迭 ũ�� ����

	//�� �������� �Է� ����
	for (int i = 0; i < n; i++) {
		cout << "[" << i << "] ������ : ";
		cin >> str[i];
	}
	//�� ������� Ư��ȭ ���� ���
	cout << "\n�� ���ú� Ư��ȭ �����Դϴ�." << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 6; j += 2) {
			if(str[i] == m[j])
				cout << "[" << str[i] << "]�� " <<m[j + 1] << "�� �ߴ޵� �����Դϴ�.\n";
		}
	}
	cout << "�̻� [" << n << "]�� �����Դϴ�.\n";
}
*/