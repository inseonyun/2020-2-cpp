/* ifstream�� >> �����ڸ� �̿��Ͽ� �ؽ�Ʈ ���� �б�
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	//��Ʈ�� ��ü ���� �� ���� ����
	ifstream fin;
	fin.open("student.txt");
	if (!fin) { //���� ���� ���� Ȯ��
		cout << "���� ���⸦ �����߽��ϴ�.";
		return 0;
	}
	char name[10], dept[20];
	int sid;
	//���� �б�
	fin >> name; //���Ͽ� �ִ� ���ڿ��� �о name�� ����
	fin >> sid; // ���Ͽ� �ִ� ������ �о sid�� ����
	fin >> dept; //���Ͽ� �ִ� ���ڿ��� �а� dept�� ����
	//���� �ؽ�Ʈ�� ȭ�鿡 ���
	cout << name << endl;
	cout << sid << endl;
	cout << dept << endl;
	fin.close(); //���� �б⸦ ��ġ�� ������ �ݴ´�.
}
*/