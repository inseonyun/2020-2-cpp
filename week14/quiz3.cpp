/* 키보드로 입력한 데이터를 파일에 저장
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ofstream os;
	char c;
	os.open("test.txt");
	while (cin.get(c)) {
		//키보드에서 입력을 받은 문자를 c에 저장함
		//이는 무한 반복이나 파일 eof를 발생시키는 컨트롤 + z를 입력하면 종료됨
		os.put(c);
	}
	os.close();
	return 0;
}
*/