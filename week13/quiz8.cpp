/* read()�� �ؽ�Ʈ ������ ���̳ʸ� I/O�� �б�
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	const char* file = "words.txt";

	ifstream fin;
	fin.open(file, ios::in | ios::binary); //�б� ���� ���� ����
	if (!fin) { //���� ���� ���� �˻�
		cout << "������ ���µ� �����߽��ϴ�.";
		return 0;
	}
	int count = 0;
	char s[32];
	while (!fin.eof()) { //������ ������ �д´�.
		fin.read(s, 32); // �ִ� 32����Ʈ�� �о� �迭 s�� ����
		int n = fin.gcount(); // ���� ���� ����Ʈ ���� �˾Ƴ�
		cout.write(s, n); // ���ۿ� �ִ� n���� ����Ʈ�� ȭ�鿡 ���
		count += n;
	}
	cout << "\n���� ����Ʈ ���� " << count << endl;
	fin.close(); // ���� �ݱ�
}
*/