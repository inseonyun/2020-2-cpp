/* read()/write()�� �̹��� ���� ����
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	const char* srcFile = "img1.jpg";
	const char* destFile = "img2.jpg";

	ifstream fsrc(srcFile, ios::in | ios::binary);
	if (!fsrc) { //���� ���� ���� �˻�
		cout << srcFile << "���� ����" << endl;
		return 0;
	}
	ofstream fdest(destFile, ios::out | ios::binary);
	if (!fdest) { //���� ���� ���� �˻�
		cout << destFile << "���� ����" << endl;
		return 0;
	}
	//�ҽ� ���Ͽ��� ���� ���Ϸ� �����ϱ�
	char buf[1024];
	while (!fsrc.eof()) { // ������ ������ �д´�.
		fsrc.read(buf, 1024); //�ִ� 1024 ����Ʈ�� �о� �迭 buf�� ����
		int n = fsrc.gcount(); //���� ���� ����Ʈ ���� �˾Ƴ�
		fdest.write(buf, n); //���� ���� ����Ʈ ����ŭ ���ۿ��� �������Ͽ� ���(����)
	}
	cout << srcFile << "��" << destFile << "�� ���� �Ϸ�" << endl;
	fsrc.close();
	fdest.close();
}
*/