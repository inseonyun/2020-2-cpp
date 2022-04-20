/* read()로 텍스트 파일을 바이너리 I/O로 읽기
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	const char* file = "words.txt";

	ifstream fin;
	fin.open(file, ios::in | ios::binary); //읽기 모드로 파일 열기
	if (!fin) { //파일 열기 실패 검사
		cout << "파일을 여는데 실패했습니다.";
		return 0;
	}
	int count = 0;
	char s[32];
	while (!fin.eof()) { //파일을 끝까지 읽는다.
		fin.read(s, 32); // 최대 32바이트를 읽어 배열 s에 저장
		int n = fin.gcount(); // 실제 읽은 바이트 수를 알아냄
		cout.write(s, n); // 버퍼에 있는 n개의 바이트를 화면에 출력
		count += n;
	}
	cout << "\n읽은 바이트 수는 " << count << endl;
	fin.close(); // 파일 닫기
}
*/