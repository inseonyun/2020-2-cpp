/* ���� ��ȣ�� ��� ���Ͽ� �߰��ϱ�
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream is;
	ofstream os;
	is.open("score3.txt");
	if (is.fail()) {
		cerr << "���� ���� ����" << endl;
		exit(1);
	}
	os.open("result2.txt");
	if (os.fail()) {
		cerr << "���� ���� ����" << endl;
		exit(1);
	}
	char c;
	int line_number = 1;
	is.get(c); //������ ���ڸ� �о�� c�� ����
	os << line_number << ": "; //�� ���Ͽ� ���γѹ��� �ݷ� ����(���)
	while (!is.eof()) {
		//is(score3)�� eof�� ������ �ݺ�
		os << c;
		//os(result2)�� �о�� ���� c�� ���(����)
		if (c == '\n') {
			//�о�� ���ڰ� �ٳѱ��̸� ���γѹ��� �����Ͽ� ���
			line_number++;
			os << line_number << ": ";
		}
		is.get(c);	//������ ���ڸ� �о�� c�� ����
	}
	is.close();
	os.close();
	return 0;
}
*/