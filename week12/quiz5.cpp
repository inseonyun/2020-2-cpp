/* 템플릿 함수보다 중복 함수가 우선이다!
#include <iostream>

using namespace std;

template <class T>
void print(T array[], int n) {
	for (int i = 0; i < n; i++)
		cout << array[i] << '\t';
	cout << endl;
	//해당 제너릭 함수만 있으면 char로 구체화 되는 경우
	// 정수 1,2,3,4,5에 대한 그래픽 문자가 출력됨
}
void print(char array[], int n) {
	//char 배열을 제대로 출력하기 위해 함수 중복
	for (int i = 0; i < n; i++)
		cout << (int)array[i] << '\t'; //array[i]를 int 타입으로 형변환 하여 정수 출력
	cout << endl;
}

int main() {
	int x[] = { 1, 2, 3, 4, 5 };
	double d[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

	print(x, 5);
	print(d, 5);

	char c[5] = { 1, 2, 3, 4, 5 };
	print(c, 5); //해당 함수 호출은 중복된 print함수 호출
}
*/