/*�ؽ�Ʈ ���� ����
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	const char* firstFile = "student.txt";
	const char* secondFile = "student2.txt";

	fstream fout(firstFile, ios::out | ios::app); //���� ���� ���� ����, app�� ���ٿ� ������
	if (!fout) { //���� ���� ���� �˻�
		cout << firstFile << "���� ����";
		return 0;
	}
	fstream fin(secondFile, ios::in); //�б� ���� ���� ����
	if (!fin) { // ���� ���� ���� �˻�
		cout << secondFile << "���� ����";
		return 0;
	}
	int c;
	while ((c = fin.get()) != EOF) { //���� ������ ���� �б�
		fout.put(c); //���� ���ڸ� ���(����)
	}
	fin.close(); // �Է� ���� �ݱ�
	fout.close(); // ��� ���� �ݱ�
}
*/