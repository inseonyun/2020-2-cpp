#include <iostream>
#include <cstring>

using namespace std;

namespace arr {
	string* str;
	string m[] = { "서울", "교육과 상업", "부산", "해양 산업", "춘천", "도시 건강 산업" };
}

class up {
public:
	virtual void input() = 0;
	virtual string cmp(string s) = 0;
	virtual void output() = 0;
};

class down : public up {
	int n;	//입력할 개수를 받을 변수
public:
	void input() {
		while (true) {
			try {
				cout << "입력할 개수를 등록해 주세요 : ";
				cin >> n;
				if (n <= 0)
					throw n;
				else
					break;
			}
			catch (int n) {
				cout << "입력된 개수가 음수이거나 0 입니다. 다시 입력해주세요.\n";
				continue;
			}
		}
		//입력받은 개수 배열 크기 생성
		arr::str = new string[n];

		//각 지역명을 입력 받음
		for (int i = 0; i < n; i++) {
			cout << "[" << i << "] 지역명 : ";
			cin >> arr::str[i];
		}
	}

	//전달 받은 지역명에 맞는 특성화 내용을 전달함
	string cmp(string s) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < sizeof(arr::m); j += 2) {
				if (s.compare(arr::m[j]) == 0)
					return arr::m[j + 1];
			}
		}
	}

	//내용 출력
	void output() {
		cout << "\n각 도시별 특성화 내용입니다." << endl;
		for (int i = 0; i < n; i++) {
			cout << "[" << arr::str[i] << "]은 " << cmp(arr::str[i]) << "이 발달된 도시입니다.\n";
		}
		cout << "이상 [" << n << "]개 지역입니다.\n";
	}
};
int main() {
	down d;
	d.input();
	d.output();
}

/*
int main() {
	int n;
	string *str;
	string m[] = { "서울", "교육과 상업", "부산", "해양 산업", "춘천", "도시 건강 산업" };

	while (true) {
		try {
			cout << "입력할 개수를 등록해 주세요 : ";
			cin >> n;
			if (n <= 0)
				throw n;
			else
				break;
		}
		catch (int n) {
			cout << "입력된 개수가 음수이거나 0입니다. 다시 입력해주세요.\n";
			continue;
		}
	}
	str = new string[n];	//입력받은 개수 배열 크기 생성

	//각 지역명을 입력 받음
	for (int i = 0; i < n; i++) {
		cout << "[" << i << "] 지역명 : ";
		cin >> str[i];
	}
	//각 지역명과 특성화 내용 출력
	cout << "\n각 도시별 특성화 내용입니다." << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 6; j += 2) {
			if(str[i] == m[j])
				cout << "[" << str[i] << "]은 " <<m[j + 1] << "이 발달된 도시입니다.\n";
		}
	}
	cout << "이상 [" << n << "]개 지역입니다.\n";
}
*/