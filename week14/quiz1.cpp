/* ������ �����͸� ����Ϳ� ���
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream is;
	is.open("score.txt");
	if (!is) { // !������ �����ε�
		cerr << "���� ���¿� �����Ͽ����ϴ�." << endl;
		exit(1);
	}
	char c;
	is.get(c); //���Ͽ��� �ϳ��� ���ڸ� �о�� c�� ����

	while (!is.eof()) {
		//������ ��(eof�� ������ �ݺ�)
		cout << c;
		is.get(c);
	}
	cout << endl;
	is.close();
	return 0;
}
*/