/* istream�� getline()�� �̿��Ͽ� �ؽ�Ʈ ���� �а� ȭ�鿡 ���
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream fin("student2.txt");
	if (!fin) {
		cout << "student2.txt ���� ���� ����" << endl;
		return 0;
	}
	char buf[81]; //�� ������ �ִ� 80���� ���ڷ� �����ȴٰ� ����
	while (fin.getline(buf, 81)) { //�� ������ �ִ� 80���� ���ڷ� ����
		cout << buf << endl; //���� ���
	}
	fin.close();
}
*/