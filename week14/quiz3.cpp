/* Ű����� �Է��� �����͸� ���Ͽ� ����
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ofstream os;
	char c;
	os.open("test.txt");
	while (cin.get(c)) {
		//Ű���忡�� �Է��� ���� ���ڸ� c�� ������
		//�̴� ���� �ݺ��̳� ���� eof�� �߻���Ű�� ��Ʈ�� + z�� �Է��ϸ� �����
		os.put(c);
	}
	os.close();
	return 0;
}
*/