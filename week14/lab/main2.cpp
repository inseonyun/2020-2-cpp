#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class up {	//추상클래스
public :
	virtual void process() = 0;
	virtual void fwrite() = 0;
};
class down : public up{		//up클래스를 상속하는 down 클래스
	string name[5];			//파일에 있는 데이터를 담을 name과 score 변수
	int score[5][3];		
	int total[5] = { 0, };	//데이터의 총점, 평균, 학점, 등수를 표현할 변수 선언 및 초기화
	double avg[5];
	char cred[5];
	int rank[5] = { 1, 1, 1, 1, 1 };	//등수는 모두 1로 초기화합니다.
public :
	void process() {				//process() 메소드에서는 파일을 읽어들여와 데이터를 가져와 변수에 각 변수에 대입함
		ifstream is;			
		is.open("data.txt");		//학생들의 이름과 점수가 있는 data.txt파일을 열음
		if (is.fail()) {
			cerr << "파일 열기 실패" << endl;
			exit(1);
		}
		for (int i = 0; i < 5; i++) {	// 시프트 연산자를 이용하여 파일에 있는 이름과 점수를 가져옴, 점수는 3과목이므로 이중 for문을 사용
			is >> name[i];
			for (int j = 0; j < 3; j++) {
				is >> score[i][j];
				total[i] += score[i][j];
			}
			avg[i] = total[i] / 3.0;
			if (avg[i] >= 90)
				cred[i] = 'A';
			else if (avg[i] >= 80)
				cred[i] = 'B';
			else if (avg[i] >= 70)
				cred[i] = 'C';
			else if (avg[i] >= 60)
				cred[i] = 'D';
			else
				cred[i] = 'F';
		}
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				if (total[i] > total[j])
					rank[j]++;
			}
		}
		is.close();			//파일 사용을 마쳤기 때문에 파일을 닫고 메소드 끝냄
	}
	void fwrite() {			//fwrite() 메소드에서는 데이터 삽입과 연산이 끝난 변수들을 result.txt라는 파일에 테이블(표)형식으로 출력합니다.
		ofstream os;
		os.open("result.txt");
		if (os.fail()) {
			cerr << "파일 열기 실패" << endl;
			exit(1);
		}	//평균 출력시 소수점 둘째자리까지 출력하기 위해 60,61과정을 수행합니다.
		os << fixed;
		os.precision(2);
		//한 칸의 총 바이트는 10바이트며 칸 안은 8바이트입니다.
		os << "┌--------┬--------┬--------┬--------┬--------┬--------┬--------┬--------┬--------┐\n";
		os << "│   번호 │   성명 │  점수 1│  점수 2│  점수 3│    총점│    평균│    학점│    등수│\n";
		os << "├--------┼--------┼--------┼--------┼--------┼--------┼--------┼--------┼--------┤\n";
		//학생들의 데이터를 파일에 출력하는 과정을 반복문으로 반복합니다.
		for (int i = 0; i < 5; i++) {
			os << "│    " << i + 1 << "   │";
			os.width(8);				//8바이트 공간(폭)을 지정하여 출력할 값의 길이를 지정합니다.
			os.fill(' ');				//데이터를 출력하고 남은 공간은 모두 공백으로 처리합니다.
			os << name[i] << "│";		//각 이름을 출력한 뒤 │를 출력하여 한 칸을 완성합니다.
			for (int j = 0; j < 3; j++) {
				os.width(8);
				os.fill(' ');
				os << score[i][j] << "│";
			}
			os.width(8);
			os.fill(' ');
			os << total[i] << "│";
			os.width(8);
			os.fill(' ');
			os << avg[i] << "│";
			os.width(8);
			os.fill(' ');
			os << cred[i] << "│";
			os.width(6);			// 8바이트 공간(폭)을 지정하면 등수를 출력한 뒤 나머지 부분은			
			os.fill(' ');			// 공백이 채워지고 그 뒤에 "/5"가 출력되기 때문에 2바이트를 뺀 공간만 공백으로 채웁니다.
			os << rank[i] << "/5" << "│" << endl;
		}
		os << "└--------┴--------┴--------┴--------┴--------┴--------┴--------┴--------┴--------┘\n";
		cout << "파일에 내용을 출력하였습니다.\n";
		os.close();				// 파일에 출력을 다 마쳤기 때문에 파일을 닫고 메소드를 끝냅니다.
	}
};

int main() {
	down d;
	d.process();
	d.fwrite();
}