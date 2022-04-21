/* 파일의 데이터를 모니터에 출력
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream is;
	is.open("score.txt");
	if (!is) { // !연산자 오버로딩
		cerr << "파일 오픈에 실패하였습니다." << endl;
		exit(1);
	}
	char c;
	is.get(c); //파일에서 하나의 문자를 읽어와 c에 저장

	while (!is.eof()) {
		//파일의 끝(eof일 때까지 반복)
		cout << c;
		is.get(c);
	}
	cout << endl;
	is.close();
	return 0;
}
*/