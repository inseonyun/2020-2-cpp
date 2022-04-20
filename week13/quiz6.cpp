/* getline(ifstream&,string&)으로 words.txt 파일을 읽고 단어 검색
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void fileRead(vector<string>& v, ifstream& fin) {
	//fin으로부터 벡터 v에 읽어들임
	string line;
	while (getline(fin, line)) { //fin 파일에서 한 라인 읽기
		v.push_back(line); //읽은 라인을 벡터에 저장
	}
}
void search(vector<string>& v, string word) {
	//벡터 v에서 word를 찾아 출력
	for (int i = 0; i < v.size(); i++) {
		int index = v[i].find(word);
		if (index != -1) // 찾음
			cout << v[i] << endl;
	}
}
int main() {
	vector<string> wordVector;
	ifstream fin("words.txt");
	if (!fin) {
		cout << "words.txt 파일을 열 수 없습니다." << endl;
		return 0;
	}
	fileRead(wordVector, fin); //파일 전체를 wordVector에 라인 별로 읽기
	fin.close(); // 파일 닫기
	cout << "words.txt 파일을 읽었습니다. " << endl;

	while (true) {
		cout << "검색할 단어를 입력하세요 >> ";
		string word;
		getline(cin, word); //키보드로부터 문자열을 읽고 word에 저장
		if (word == "exit")
			break; //입력받은 문자열이 exit면 프로그램 종료
		search(wordVector, word); //벡터에서 문자열을 검색하여 출력
	}
	cout << "프로그램을 종료합니다." << endl;
}
*/