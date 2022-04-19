#include <iostream>
#include <cstring>

using namespace std;

class Ex {
public:
	char ch;
	int n, count = 0;
	virtual void prt() = 0;
};

class Ex1 : public Ex {
public:
	Ex1(char ch) {
		this->ch = ch;
		this->n = 10;
	}
	Ex1(char ch, int n) {
		this->ch = ch;
		this->n = n;
	}
	void prt() {
		for (int i = 0; i < n; i++) {
			cout << ch << " ";
		}
		cout << "(" << n << ")\n";
	}
};
class Ex2 : public Ex {
public:
	Ex2() {
		cout << "기호를 입력하세요 : ";
		cin >> this->ch;
		while (true) {
			try {
				cout << "반복 횟수를 입력하세요. ";
				cin >> this->n;
				if (this->n <= 0) {
					throw n;
				}
				else
					break;
			}
			catch (int n) {
				cout << "입력된 횟수는 0보다 작거나 같은 수입니다." << endl;
				continue;
			}
		}
	}
	Ex2(char ch) {
		this->ch = ch;
		this->n = 10;
	}
	void prt() {
		for (int i = 0; i < n; i++) {
			cout << ch << " ";
		}
		cout << "(" << n << ")\n";
	}
};
class Ex3 : public Ex {
	string s[5] = { "첫", "두", "세", "네","다섯"};
public:
	void input() {
		cout << "기호를 입력하세요 : ";
		cin >> this->ch;
		while (true) {
			try {
				cout << "반복 횟수를 입력하세요. ";
				cin >> this->n;
				if (this->n <= 0) {
					throw n;
				}
				else
					break;
			}
			catch (int n) {
				cout << "입력된 횟수는 0보다 작거나 같은 수입니다." << endl;
				continue;
			}
		}
	}
	void input(char ch) {
		this->ch = ch;
		this->n = 10;
	}
	void input(char ch, int n) {
		this->ch = ch;
		this->n = n;
	}
	void prt() {
		static int gcount = 0;
		cout << s[gcount] << "번째 출력 결과 : ";
		for (int i = 0; i < n; i++) {
			cout << this->ch << " ";
		}
		cout << "(" << this->n << ")\n";
		++gcount;
	}
};

int main() {
	/*
	Ex1* e1 = new Ex1('#');
	Ex1* e2 = new Ex1('@', 5);

	e1->prt();
	e2->prt();
	*/
	/*
	Ex2* e1 = new Ex2();
	e1->prt();
	*/
	
	Ex3* e1 = new Ex3();
	Ex3* e2 = new Ex3();
	Ex3* e3 = new Ex3();

	e1->input();
	e1->prt();

	e2->input('#');
	e2->prt();

	e3->input('@',5);
	e3->prt();
	
}
