/* 명령어 라인에서 파일 복사
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
	//argc는 해당 프로젝트와 인수들의 개수
	//argv의 0인덱스는 프로젝트, 1에는 인수1 이렇게 들어감
	ifstream is;
	ofstream os;
	is.open(argv[1]);
	if (is.fail()) {
		cerr << "파일 오픈 실패" << endl;
		exit(1);
	}
	os.open(argv[2]);
	if (os.fail()) {
		cerr << "파일 오픈 실패" << endl;
		exit(1);
	}
	char c;
	int line_number = 1;
	is.get(c); // argv[1]파일에서 문자 하나를 가져와 c에 저장
	os << line_number << ": "; //argv[2]에 라인넘버 출력(저장)
	while (!is.eof()) {
		os << c;
		if (c == '\n') {
			line_number++;
			os << line_number << ": ";
		}
		is.get(c);
	}
}
*/