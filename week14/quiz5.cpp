/* 구조체 배열에 저장된 데이터를 파일에 저장
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	struct Score {
		int number;
		char name[30];
		int score;
	} grades[] = { {20200001, "홍길동", 100},
				   {20200002, "김유신", 90},
				   {20200003, "강감찬", 80} };
	ofstream os;
	os.open("test.dat", ofstream::binary);
	//test.dat라는 파일을 binary 파일모드로 오픈
	if (os.fail()) {
		cout << "test.dat 파일을 열 수 없습니다." << endl;
		exit(1);
	}
	os.write((char*)&grades, sizeof(grades));
	//test.dat파일에 해당 구조체 변수들 내용 저장(출력)
	os.close();
	return 0;
}
*/