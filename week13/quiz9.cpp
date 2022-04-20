/* read()/write()로 이미지 파일 복사
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	const char* srcFile = "img1.jpg";
	const char* destFile = "img2.jpg";

	ifstream fsrc(srcFile, ios::in | ios::binary);
	if (!fsrc) { //파일 열기 실패 검사
		cout << srcFile << "열기 오류" << endl;
		return 0;
	}
	ofstream fdest(destFile, ios::out | ios::binary);
	if (!fdest) { //파일 열기 실패 검사
		cout << destFile << "열기 오류" << endl;
		return 0;
	}
	//소스 파일에서 목적 파일로 복사하기
	char buf[1024];
	while (!fsrc.eof()) { // 파일을 끝까지 읽는다.
		fsrc.read(buf, 1024); //최대 1024 바이트를 읽어 배열 buf에 저장
		int n = fsrc.gcount(); //실제 읽은 바이트 수를 알아냄
		fdest.write(buf, n); //실제 읽은 바이트 수만큼 버퍼에서 목적파일에 기록(저장)
	}
	cout << srcFile << "을" << destFile << "로 복사 완료" << endl;
	fsrc.close();
	fdest.close();
}
*/