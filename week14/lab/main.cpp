/*
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
	
	string name[5];
	int score[5][3];
	int total[5] = { 0, };
	double avg[5];
	char cred[5];
	int rank[] = { 1, 1, 1, 1, 1 };
	
	ifstream is;
	is.open("data.txt");
	if (is.fail()) {
		cerr << "파일 열기 실패" << endl;
		exit(1);
	}

	ofstream os;
	os.open("result.txt");
	if (is.fail()) {
		cerr << "파일 열기 실패" << endl;
		exit(1);
	}
	for (int i = 0; i < 5; i++) {
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
	cout << fixed;
	cout.precision(2);
	os << fixed;
	os.precision(2);
	//칸 안에는 8바이트임
	cout << "┌--------┬--------┬--------┬--------┬--------┬--------┬--------┬--------┬--------┐\n";
	cout << "│   번호 │   성명 │  점수 1│  점수 2│  점수 3│    총점│    평균│    학점│    등수│\n";
	cout << "├--------┼--------┼--------┼--------┼--------┼--------┼--------┼--------┼--------┤\n";

	for (int i = 0; i < 5; i++) {
		cout << "│    " << i + 1 << "   │";
		cout.width(8);
		cout.fill(' ');
		cout << name[i] << "│";
		for (int j = 0; j < 3; j++) {
			cout.width(8);
			cout.fill(' ');
			cout << score[i][j] << "│";
		}
		cout.width(8);
		cout.fill(' ');
		cout << total[i] << "│";
		cout.width(8);
		cout.fill(' ');
		cout << avg[i] << "│";
		cout.width(8);
		cout.fill(' ');
		cout << cred[i] << "│";
		cout.width(6);
		cout.fill(' ');
		cout << rank[i] << "/5" << "│" << endl;
	}
	cout << "└--------┴--------┴--------┴--------┴--------┴--------┴--------┴--------┴--------┘\n";
	cout << " 위 내용 복사 완료\n";

	os << "┌--------┬--------┬--------┬--------┬--------┬--------┬--------┬--------┬--------┐\n";
	os << "│   번호 │   성명 │  점수 1│  점수 2│  점수 3│    총점│    평균│    학점│    등수│\n";
	os << "├--------┼--------┼--------┼--------┼--------┼--------┼--------┼--------┼--------┤\n";

	for (int i = 0; i < 5; i++) {
		os << "│    " << i + 1 << "   │";
		os.width(8);
		os.fill(' ');
		os << name[i] << "│";
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
		os.width(6);
		os.fill(' ');
		os << rank[i] << "/5" << "│" << endl;
	}
	os << "└--------┴--------┴--------┴--------┴--------┴--------┴--------┴--------┴--------┘\n";

	is.close();
	os.close();

	return 0;
}
*/