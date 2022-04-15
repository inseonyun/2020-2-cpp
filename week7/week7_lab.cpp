#include <iostream>

using namespace std;

class week7 {
public:
	virtual void input() = 0;	//입력 받는 메소드
	virtual void result() = 0;	//2a-3b 계산하는 메소드
	virtual void output() = 0;	//계산 결과 출력하는 메소드
	virtual void sortA() = 0;	//배열을 정렬하는 메소드
	virtual void printsort() = 0;	//정렬된 1차원 배열 출력하는 메소드
};
class real : public week7 {
	int tmp, num = 0;
	int a[2][3] = { 0, };	// a행렬
	int b[2][3] = { 0, };	// b행렬
	int res[2][3] = { 0, };	// 2a-3b의 결과를 담을 행렬
	int array[12] = { 0, };	// 두 행렬을 담을 1차원 배열
public:
	virtual void input() {
		cout << "2X3 a행렬 성분을 입력합니다.\n";
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 3; j++) {
				cout << "행열의 성분 입력 : ";
				cin >> a[i][j];
			}
		}
		cout << "2X3 b행렬 성분을 입력합니다.\n";
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 3; j++) {
				cout << "행열의 성분 입력 : ";
				cin >> b[i][j];
			}
		}
	}
	virtual void result() {
		// 결과값 저장
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 3; j++) {
				res[i][j] = (2 * a[i][j]) - (3 * b[i][j]);
			}
		}
	}
	virtual void output() {
		// 2a-3b 결과값 출력
		cout << "2A - 3B의 결과입니다.\n";
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 3; j++) {
				cout << res[i][j] << "\t";
			}
			cout << endl;
		}
	}
	virtual void sortA() {
		// a행렬의 성분 1차원 배열에 저장
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 3; j++) {
				array[num] = a[i][j];
				num++;
			}
		}
		// b행렬의 성분 1차원 배열에 저장
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 3; j++) {
				array[num] = b[i][j];
				num++;
			}
		}
		// 1차원 배열 정렬
		for (int i = 0; i < num; i++) {
			for (int j = 0; j < num - 1; j++) {
				if (array[j] > array[j + 1]) {
					tmp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = tmp;
				}
			}
		}
	}
	virtual void printsort() {
		//정렬된 1차원 배열 출력
		cout << "\n두 행렬을 오름차순으로 정렬한 결과입니다.\n";
		for (int i = 0; i < 12; i++) {
			cout << array[i] << "\t";
		}
	}
};


int main() {
	real r;
	r.input();		//행렬 성분 입력 받음
	r.result();		//행렬 2a-3b 계산
	r.output();		//계산된 값 출력
	r.sortA();		// 두 행렬 정렬
	r.printsort();	// 정렬된 배열 출력
	/*
	int a[2][3] = {
		{1,-2,3},
		{0,4,5 }
	};
	int b[2][3] = {
		{4,6,8},
		{1,-3,-7}
	};
	int result[2][3] = { 0, };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			result[i][j] = (2 * a[i][j]) - (3 * b[i][j]);
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << result[i][j] << "\t";
		}
		cout << endl;
	}
	*/
}