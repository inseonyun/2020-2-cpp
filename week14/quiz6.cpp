/* ��ɾ� ���ο��� ���� ����
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
	//argc�� �ش� ������Ʈ�� �μ����� ����
	//argv�� 0�ε����� ������Ʈ, 1���� �μ�1 �̷��� ��
	ifstream is;
	ofstream os;
	is.open(argv[1]);
	if (is.fail()) {
		cerr << "���� ���� ����" << endl;
		exit(1);
	}
	os.open(argv[2]);
	if (os.fail()) {
		cerr << "���� ���� ����" << endl;
		exit(1);
	}
	char c;
	int line_number = 1;
	is.get(c); // argv[1]���Ͽ��� ���� �ϳ��� ������ c�� ����
	os << line_number << ": "; //argv[2]�� ���γѹ� ���(����)
	while (!is.eof()) {
		os << c;
		if (c == '\n') {
			line_number++;
			os << line_number << ": ";
		}
		is.get(c);
	}
}
*/