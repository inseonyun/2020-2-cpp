#include <iostream>

using namespace std;

class student { 
	//이름, 교과목 점수, 총점, 평균, 학점 변수
	char name[10];
	int kor, mat, eng;
	int total = 0;
	double avg;
	char cred;

public :
	void setInfo() { //메소드 내부 정의
		cout << "이름을 입력하세요:";
		cin >> name;
		cout << "1) 국어 점수를 입력하세요:";
		cin >> kor;
		cout << "2) 수학 점수를 입력하세요:";
		cin >> mat;
		cout << "3) 영어 점수를 입력하세요:";
		cin >> eng;
	}
	void setTotal();
	void setAvg();
	void setCred();
	void print_all();
};
//총점 평균 학점 합격여부 및 출력 모두 외부 정의
void student::setTotal() {
	total = kor + mat + eng;
}
void student::setAvg() {
	avg = total / 3.0;
}
void student::setCred() {
	if(avg >= 90) 
		cred = 'A';
	else if (avg >= 80) 
		cred = 'B';
	else if (avg >= 70) 
		cred = 'C';
	else if (avg >= 60) 
		cred = 'D';
	else 
		cred = 'F';
}
void student::print_all() {
	//소수점을 두자리까지만 출력하게 고정함
	cout.setf(ios::fixed);
	cout.precision(2);

	cout << endl << "[" << name << "]님의 성적은 국어점수 [" << kor << "], 수학점수 [" << mat << "], 영어점수 [" << eng << "]이고," << endl;
	cout << "총점 [" << total << "], 평균 [" << avg << "], 학점 [" << cred << "]으로" << endl;
	if (avg >= 70)
		cout << "졸업 시험에 [합격] 하였습니다." << endl;
	else
		cout << "졸업 시험에 [불합격] 하였습니다." << endl;

}

void main2() {
	student s1;
	s1.setInfo();
	s1.setTotal();
	s1.setAvg();
	s1.setCred();
	s1.print_all();
}