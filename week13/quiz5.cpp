/* istream의 getline()을 이용하여 텍스트 파일 읽고 화면에 출력
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream fin("student2.txt");
	if (!fin) {
		cout << "student2.txt 파일 열기 실패" << endl;
		return 0;
	}
	char buf[81]; //한 라인이 최대 80개의 문자로 구성된다고 가정
	while (fin.getline(buf, 81)) { //한 라인이 최대 80개의 문자로 구성
		cout << buf << endl; //라인 출력
	}
	fin.close();
}
*/