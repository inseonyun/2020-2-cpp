/* ���̳ʸ� I/O�� ���� ����
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	//�ҽ� ���ϰ� ���� ������ �̸�
	const char* srcFile = "img1.jpg"; // ������
	const char* destFile = "img2.jpg"; // �����
	//�ҽ� ���� ����
	ifstream fsrc(srcFile, ios::in | ios::binary);
	if (!fsrc) { // ���� ���� ���� �˻�
		cout << srcFile << "���� ����" << endl;
		return 0;
	}
	// ���� ���� ����
	ofstream fdest(destFile, ios::out | ios::binary);
	if (!fdest) { //���� ���� ���� �˻�
		cout << destFile << "���� ����" << endl;
		return 0;
	}
	//�ҽ� ���Ͽ��� ���� ���Ϸ� �����ϱ�
	int c;
	while ((c = fsrc.get()) != EOF) { // �ҽ� ������ ������ �� ����Ʈ�� �д´�.
		fdest.put(c); // ���� ����Ʈ�� ���Ͽ� ���(����)�Ѵ�.
	}
	cout << srcFile << "�� " << destFile << "�� ���� �Ϸ�" << endl;
	fsrc.close();
	fdest.close();
}
*/