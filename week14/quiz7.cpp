//명령어 라인에서 소스를 확인해보자
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
	ifstream is;
	is.open(argv[1]);
	if (is.fail()) {
		cerr << "파일 오픈 실패" << endl;
		exit(1);
	}
	char c;
	int line_number = 1;
	is.get(c);
	cout << line_number << ": ";

	while (!is.eof()) {
		cout << c;
		if (c == '\n') {
			line_number++;
			cout << line_number << ": ";
		}
		is.get(c);
	}
	is.close();
	return 0;
}