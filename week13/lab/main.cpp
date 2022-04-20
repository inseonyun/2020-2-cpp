#include <iostream>

using namespace std;

//문제 1 배열의 원소에서 가장 큰 원소를 반환하는 제네릭 함수
template <class T>
T biggest(T x[], int n) {
	T tmp;
	tmp = x[0];
	for (int i = 1; i < n; i++) {
		if (tmp < x[i])
			tmp = x[i];
	}
	return tmp;
}
//문제 2 두 배열이 같은지를 확인하는 제네릭 함수
template<class T>
bool equalArrays(T x[], T y[], int n) {
	for (int i = 0; i < n; i++) {
		if (x[i] != y[i])
			return false;
	}
	return true;
}
//문제 3 배열의 원소 순서를 반대로 만드는 제네릭 함수
template<class T>
void reverseArray(T *x, int n) {
	for (int i = 0; i < n/2; i++) {
		T tmp = x[i];
		x[i] = x[n - 1 - i];
		x[n - 1 - i] = tmp;
	}
}
//문제 4 배열에 특정 원소가 있는지 확인하는 제네릭 함수
template<class T>
bool search(T item, T x[], int n) {
	for (int i = 0; i < n; i++) {
		if (x[i] == item)
			return true;
	}
	return false;
}
//문제 5 두 배열을 합하는 제네릭 함수
template<class T>
T* concat(T x[], int m, T y[], int n) {
	T* tmp = new T[m + n];
	for (int i = 0; i < m; i++) {
		tmp[i] = x[i];
	}
	for (int i = 0; i < n; i++) {
		tmp[i + m] = y[i];
	}
	return tmp;
}
int main() {
	/*문제 1
	int x[] = { 1, 10, 100, 5, 4 };
	cout << biggest(x, 5) << endl;
	double y[] = { 6.4, 3.3, -200.6, 7.7, 8.8, 20.3 };
	cout << biggest(y, 6) << endl;
	*/
	
	/*문제 2
	int x[] = { 1, 10, 100, 5, 4 };
	int y[] = { 1, 10, 100, 5, 4 };
	double a[] = { 0.1, 2.3, 3.5 };
	double b[] = { 5.3, -2.1, 12.5 };

	if (equalArrays(x, y, 5))
		cout << "같다" << endl;
	else
		cout << "다르다" << endl;
	if (equalArrays(a, b, 5))
		cout << "같다" << endl;
	else
		cout << "다르다" << endl;
	*/

	/*문제 4
	int x[] = { 1, 10, 100, 5, 4 };
	reverseArray(x, 5);
	for (int i = 0; i < 5; i++)
		cout << x[i] << ' ';
	cout << endl;
	*/

	/*문제 4
	int x[] = { 1, 10, 100, 5, 4 };
	if (search(100, x, 5))
		cout << "100이 배열 x에 포함되어 있습니다.\n";
	else
		cout << "100이 배열 x에 포함되어 있지 않습니다.\n";

	char c[] = { 'h', 'e', 'l', 'l', 'o' };
	if (search('e', c, 5))
		cout << "e가 배열 c에 포함되어 있습니다.\n";
	else
		cout << "e가 배열 c에 포함되어 있지 않습니다.\n";
	*/

	//문제 5 
	cout << "두 개의 정수 배열을 합칩니다." << endl;
	int x[] = { 1,2,3 };
	int y[] = { 6,7,8,9 };
	int* p = concat(x, 3, y, 4);
	for (int i = 0; i < 7; i++)
		cout << p[i] << ' ';
	cout << endl;
	delete[]p;
	
	cout << "두 개의 문자 배열을 합칩니다" << endl;
	char a[] = { 'L', 'o', 'v', 'e' };
	char b[] = { 'C', '+', '+' };
	char* q = concat(a, 4, b, 3);
	for (int i = 0; i < 7; i++)
		cout << q[i] << ' ';
	cout << endl;
	delete[] q;
}