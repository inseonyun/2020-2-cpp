/* 원본 내용을 수정하여 대상 파일에 저장하기
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream is;
	is.open("score2.txt");
	if (!is) {
		cerr << "파일 오픈에 실패하였습니다." << endl;
		exit(1);
	}
	int number;		//학번
	char name[30];	//이름
	int score;		//성적
	is >> number >> name >> score;
	//파일에서 데이터를 가져옴 본래 파일의 데이터는 문자열 타입이지만
	//저장하는 변수의 데이터 타입으로 변환되어 저장됨
	ofstream os;
	os.open("result.txt");
	os << number << "," << name << "," << score << endl;
	//결과 파일에 score2에서 받은 데이터를 저장(출력함)
	
	is.close();
	os.close();
	return 0;
}
*/