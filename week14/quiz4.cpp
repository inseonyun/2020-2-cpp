/* 라인 번호를 대상 파일에 추가하기
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream is;
	ofstream os;
	is.open("score3.txt");
	if (is.fail()) {
		cerr << "파일 오픈 실패" << endl;
		exit(1);
	}
	os.open("result2.txt");
	if (os.fail()) {
		cerr << "파일 오픈 실패" << endl;
		exit(1);
	}
	char c;
	int line_number = 1;
	is.get(c); //파일의 문자를 읽어와 c에 저장
	os << line_number << ": "; //새 파일에 라인넘버와 콜론 저장(출력)
	while (!is.eof()) {
		//is(score3)가 eof일 때까지 반복
		os << c;
		//os(result2)에 읽어온 문자 c를 출력(저장)
		if (c == '\n') {
			//읽어온 문자가 줄넘김이면 라인넘버를 증가하여 출력
			line_number++;
			os << line_number << ": ";
		}
		is.get(c);	//파일의 문자를 읽어와 c에 저장
	}
	is.close();
	os.close();
	return 0;
}
*/