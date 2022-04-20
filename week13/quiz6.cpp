/* getline(ifstream&,string&)���� words.txt ������ �а� �ܾ� �˻�
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void fileRead(vector<string>& v, ifstream& fin) {
	//fin���κ��� ���� v�� �о����
	string line;
	while (getline(fin, line)) { //fin ���Ͽ��� �� ���� �б�
		v.push_back(line); //���� ������ ���Ϳ� ����
	}
}
void search(vector<string>& v, string word) {
	//���� v���� word�� ã�� ���
	for (int i = 0; i < v.size(); i++) {
		int index = v[i].find(word);
		if (index != -1) // ã��
			cout << v[i] << endl;
	}
}
int main() {
	vector<string> wordVector;
	ifstream fin("words.txt");
	if (!fin) {
		cout << "words.txt ������ �� �� �����ϴ�." << endl;
		return 0;
	}
	fileRead(wordVector, fin); //���� ��ü�� wordVector�� ���� ���� �б�
	fin.close(); // ���� �ݱ�
	cout << "words.txt ������ �о����ϴ�. " << endl;

	while (true) {
		cout << "�˻��� �ܾ �Է��ϼ��� >> ";
		string word;
		getline(cin, word); //Ű����κ��� ���ڿ��� �а� word�� ����
		if (word == "exit")
			break; //�Է¹��� ���ڿ��� exit�� ���α׷� ����
		search(wordVector, word); //���Ϳ��� ���ڿ��� �˻��Ͽ� ���
	}
	cout << "���α׷��� �����մϴ�." << endl;
}
*/