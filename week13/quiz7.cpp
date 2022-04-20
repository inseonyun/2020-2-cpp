/* 바이너리 I/O로 파일 복사
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	//소스 파일과 목적 파일의 이름
	const char* srcFile = "img1.jpg"; // 원본명
	const char* destFile = "img2.jpg"; // 복사명
	//소스 파일 열기
	ifstream fsrc(srcFile, ios::in | ios::binary);
	if (!fsrc) { // 파일 열기 실패 검사
		cout << srcFile << "열기 오류" << endl;
		return 0;
	}
	// 목적 파일 열기
	ofstream fdest(destFile, ios::out | ios::binary);
	if (!fdest) { //파일 열기 실패 검사
		cout << destFile << "열기 오류" << endl;
		return 0;
	}
	//소스 파일에서 목적 파일로 복사하기
	int c;
	while ((c = fsrc.get()) != EOF) { // 소스 파일을 끝까지 한 바이트씩 읽는다.
		fdest.put(c); // 읽은 바이트를 파일에 출력(저장)한다.
	}
	cout << srcFile << "을 " << destFile << "로 복사 완료" << endl;
	fsrc.close();
	fdest.close();
}
*/