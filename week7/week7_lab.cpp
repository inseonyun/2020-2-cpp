#include <iostream>

using namespace std;

class week7 {
public:
	virtual void input() = 0;	//�Է� �޴� �޼ҵ�
	virtual void result() = 0;	//2a-3b ����ϴ� �޼ҵ�
	virtual void output() = 0;	//��� ��� ����ϴ� �޼ҵ�
	virtual void sortA() = 0;	//�迭�� �����ϴ� �޼ҵ�
	virtual void printsort() = 0;	//���ĵ� 1���� �迭 ����ϴ� �޼ҵ�
};
class real : public week7 {
	int tmp, num = 0;
	int a[2][3] = { 0, };	// a���
	int b[2][3] = { 0, };	// b���
	int res[2][3] = { 0, };	// 2a-3b�� ����� ���� ���
	int array[12] = { 0, };	// �� ����� ���� 1���� �迭
public:
	virtual void input() {
		cout << "2X3 a��� ������ �Է��մϴ�.\n";
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 3; j++) {
				cout << "�࿭�� ���� �Է� : ";
				cin >> a[i][j];
			}
		}
		cout << "2X3 b��� ������ �Է��մϴ�.\n";
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 3; j++) {
				cout << "�࿭�� ���� �Է� : ";
				cin >> b[i][j];
			}
		}
	}
	virtual void result() {
		// ����� ����
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 3; j++) {
				res[i][j] = (2 * a[i][j]) - (3 * b[i][j]);
			}
		}
	}
	virtual void output() {
		// 2a-3b ����� ���
		cout << "2A - 3B�� ����Դϴ�.\n";
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 3; j++) {
				cout << res[i][j] << "\t";
			}
			cout << endl;
		}
	}
	virtual void sortA() {
		// a����� ���� 1���� �迭�� ����
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 3; j++) {
				array[num] = a[i][j];
				num++;
			}
		}
		// b����� ���� 1���� �迭�� ����
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 3; j++) {
				array[num] = b[i][j];
				num++;
			}
		}
		// 1���� �迭 ����
		for (int i = 0; i < num; i++) {
			for (int j = 0; j < num - 1; j++) {
				if (array[j] > array[j + 1]) {
					tmp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = tmp;
				}
			}
		}
	}
	virtual void printsort() {
		//���ĵ� 1���� �迭 ���
		cout << "\n�� ����� ������������ ������ ����Դϴ�.\n";
		for (int i = 0; i < 12; i++) {
			cout << array[i] << "\t";
		}
	}
};


int main() {
	real r;
	r.input();		//��� ���� �Է� ����
	r.result();		//��� 2a-3b ���
	r.output();		//���� �� ���
	r.sortA();		// �� ��� ����
	r.printsort();	// ���ĵ� �迭 ���
	/*
	int a[2][3] = {
		{1,-2,3},
		{0,4,5 }
	};
	int b[2][3] = {
		{4,6,8},
		{1,-3,-7}
	};
	int result[2][3] = { 0, };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			result[i][j] = (2 * a[i][j]) - (3 * b[i][j]);
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << result[i][j] << "\t";
		}
		cout << endl;
	}
	*/
}