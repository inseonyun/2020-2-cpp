/* ifstream과 >> 연산자를 이용하여 텍스트 파일 읽기
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	//스트림 객체 생성 및 파일 열기
	ifstream fin;
	fin.open("student.txt");
	if (!fin) { //파일 열기 실패 확인
		cout << "파일 열기를 실패했습니다.";
		return 0;
	}
	char name[10], dept[20];
	int sid;
	//파일 읽기
	fin >> name; //파일에 있는 문자열을 읽어서 name에 저장
	fin >> sid; // 파일에 있는 정수를 읽어서 sid에 저장
	fin >> dept; //파일에 있는 문자열을 읽고 dept에 저장
	//읽은 텍스트를 화면에 출력
	cout << name << endl;
	cout << sid << endl;
	cout << dept << endl;
	fin.close(); //파일 읽기를 마치고 파일을 닫는다.
}
*/