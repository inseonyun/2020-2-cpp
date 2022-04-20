/* 키보드로 입력받아 텍스트 파일 저장하기
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	char name[10], dept[20];
	int sid;

	//키보드로부터 읽기
	cout << "이름 >> ";
	cin >> name; //키보드로부터 이름 입력 받음
	cout << "학번 >> ";
	cin >> sid; //키보드로부터 학번 입력 받음
	cout << "학과 >> ";
	cin >> dept; //키보드로부터 학과 입력 받음

	//파일 열기, student.txt 파일을 열고, 출력 스트림 생성
	ofstream fout("student.txt");
	if (!fout) { //파일 열기 실패 검사
		cout << "student.txt 파일을 열 수 없습니다.";
		return 0;
	}
	// 파일 쓰기
	fout << name << endl; //파일에 name을 씀(저장)
	fout << sid << endl; // 파일에 sid를 씀(저장)
	fout << dept << endl; // 파일에 dept를 씀(저장)

	fout.close(); //파일 닫기
}
*/