/* Ű����� �Է¹޾� �ؽ�Ʈ ���� �����ϱ�
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	char name[10], dept[20];
	int sid;

	//Ű����κ��� �б�
	cout << "�̸� >> ";
	cin >> name; //Ű����κ��� �̸� �Է� ����
	cout << "�й� >> ";
	cin >> sid; //Ű����κ��� �й� �Է� ����
	cout << "�а� >> ";
	cin >> dept; //Ű����κ��� �а� �Է� ����

	//���� ����, student.txt ������ ����, ��� ��Ʈ�� ����
	ofstream fout("student.txt");
	if (!fout) { //���� ���� ���� �˻�
		cout << "student.txt ������ �� �� �����ϴ�.";
		return 0;
	}
	// ���� ����
	fout << name << endl; //���Ͽ� name�� ��(����)
	fout << sid << endl; // ���Ͽ� sid�� ��(����)
	fout << dept << endl; // ���Ͽ� dept�� ��(����)

	fout.close(); //���� �ݱ�
}
*/