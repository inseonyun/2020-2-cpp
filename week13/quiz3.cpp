/* get()�� �̿��� �ؽ�Ʈ ���� �б�
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	const char* file = "student2.txt";

	ifstream fin(file);
	if (!fin) {
		cout << file << "���� ����" << endl;
		return 0;
	}
	int count = 0;
	int c;
	while ((c = fin.get()) != EOF) { //EOF�� ���� ������ ���� �б�
		cout << (char)c;
		count++;
	}
	cout << "\n���� ����Ʈ ���� " << count << endl;
	fin.close(); // ���� �ݱ�
}
*/