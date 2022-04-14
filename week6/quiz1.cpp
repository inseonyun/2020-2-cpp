#include <iostream>

using namespace std;

void main1() {
	char name[10];				//학생 이름 변수
	int kor, eng, mat, sum = 0;	//국어 영어 수학 총점 변수
	double avg;					//평균 변수
	char cred;					//학점 변수
	bool res;				//합격 불합격 변수

	cout << "이름을 입력하세요:";
	cin >> name;
	cout << "1) 국어 점수를 입력하세요:";
	cin >> kor;
	cout << "2) 수학 점수를 입력하세요:";
	cin >> mat;
	cout << "3) 영어 점수를 입력하세요:";
	cin >> eng;

	sum = kor + mat + eng;	//총점에 각 교과목 점수 합하여 대입
	avg = sum / 3.0;		//평균에 총점 / 3.0 (평균이 실수) 대입
	
	if (avg >= 90) {
		cred = 'A';
		res = true;
	}
	else if (avg >= 80) {
		cred = 'B';
		res = true;
	}
	else if (avg >= 70) {
		cred = 'C';
		res = true;
	}
	else if (avg >= 60) {
		cred = 'D';
		res = false;
	}
	else {
		cred = 'F';
		res = false;
	}
	//소수점을 두자리까지만 출력하게 고정함
	cout.setf(ios::fixed);
	//혹은 cout<<fixed; 
	cout.precision(2);
	 
	cout << endl << "[" << name << "]님의 성적은 국어점수 [" << kor << "], 수학점수 [" << mat << "], 영어점수 [" << eng << "]이고," << endl;
	cout << "총점 [" << sum << "], 평균 [" << avg << "], 학점 [" << cred << "]으로" << endl;
	if(res)
 		cout << "졸업 시험에 [합격] 하였습니다." << endl;
	else
		cout << "졸업 시험에 [불합격] 하였습니다." << endl;
}