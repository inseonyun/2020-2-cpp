/* ���� ������ �����Ͽ� ��� ���Ͽ� �����ϱ�
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream is;
	is.open("score2.txt");
	if (!is) {
		cerr << "���� ���¿� �����Ͽ����ϴ�." << endl;
		exit(1);
	}
	int number;		//�й�
	char name[30];	//�̸�
	int score;		//����
	is >> number >> name >> score;
	//���Ͽ��� �����͸� ������ ���� ������ �����ʹ� ���ڿ� Ÿ��������
	//�����ϴ� ������ ������ Ÿ������ ��ȯ�Ǿ� �����
	ofstream os;
	os.open("result.txt");
	os << number << "," << name << "," << score << endl;
	//��� ���Ͽ� score2���� ���� �����͸� ����(�����)
	
	is.close();
	os.close();
	return 0;
}
*/