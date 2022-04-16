#include <iostream>
#include <cstring>

using namespace std;

int stringTotal(const char x[]) {
	int sum = 0;
	int len = strlen(x);
	for (int i = 0; i < len; i++) {
		if (x[i] >= '0' && x[i] <= '9')
			sum = sum * 10 + x[i] - '0';
		else
			throw x;
	}
	return sum;
}
int main() {
	int n;
	
	try {
		n = stringTotal("123");
		cout << "\"123\" �� ����" << n << endl;
		n = stringTotal("1A3");
		cout << "\"1A3\" �� ����" << n << "�� ��ȯ��" << endl;
	}
	catch (const char* s) {
		cout << s << "ó������ ���� �߻�!!" << endl;
	}
}