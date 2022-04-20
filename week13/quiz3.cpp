/* get()을 이용한 텍스트 파일 읽기
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	const char* file = "student2.txt";

	ifstream fin(file);
	if (!fin) {
		cout << file << "열기 오류" << endl;
		return 0;
	}
	int count = 0;
	int c;
	while ((c = fin.get()) != EOF) { //EOF를 만날 때까지 문자 읽기
		cout << (char)c;
		count++;
	}
	cout << "\n읽은 바이트 수는 " << count << endl;
	fin.close(); // 파일 닫기
}
*/