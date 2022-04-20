#include <iostream>

using namespace std;

//���� 1 �迭�� ���ҿ��� ���� ū ���Ҹ� ��ȯ�ϴ� ���׸� �Լ�
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
//���� 2 �� �迭�� �������� Ȯ���ϴ� ���׸� �Լ�
template<class T>
bool equalArrays(T x[], T y[], int n) {
	for (int i = 0; i < n; i++) {
		if (x[i] != y[i])
			return false;
	}
	return true;
}
//���� 3 �迭�� ���� ������ �ݴ�� ����� ���׸� �Լ�
template<class T>
void reverseArray(T *x, int n) {
	for (int i = 0; i < n/2; i++) {
		T tmp = x[i];
		x[i] = x[n - 1 - i];
		x[n - 1 - i] = tmp;
	}
}
//���� 4 �迭�� Ư�� ���Ұ� �ִ��� Ȯ���ϴ� ���׸� �Լ�
template<class T>
bool search(T item, T x[], int n) {
	for (int i = 0; i < n; i++) {
		if (x[i] == item)
			return true;
	}
	return false;
}
//���� 5 �� �迭�� ���ϴ� ���׸� �Լ�
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
	/*���� 1
	int x[] = { 1, 10, 100, 5, 4 };
	cout << biggest(x, 5) << endl;
	double y[] = { 6.4, 3.3, -200.6, 7.7, 8.8, 20.3 };
	cout << biggest(y, 6) << endl;
	*/
	
	/*���� 2
	int x[] = { 1, 10, 100, 5, 4 };
	int y[] = { 1, 10, 100, 5, 4 };
	double a[] = { 0.1, 2.3, 3.5 };
	double b[] = { 5.3, -2.1, 12.5 };

	if (equalArrays(x, y, 5))
		cout << "����" << endl;
	else
		cout << "�ٸ���" << endl;
	if (equalArrays(a, b, 5))
		cout << "����" << endl;
	else
		cout << "�ٸ���" << endl;
	*/

	/*���� 4
	int x[] = { 1, 10, 100, 5, 4 };
	reverseArray(x, 5);
	for (int i = 0; i < 5; i++)
		cout << x[i] << ' ';
	cout << endl;
	*/

	/*���� 4
	int x[] = { 1, 10, 100, 5, 4 };
	if (search(100, x, 5))
		cout << "100�� �迭 x�� ���ԵǾ� �ֽ��ϴ�.\n";
	else
		cout << "100�� �迭 x�� ���ԵǾ� ���� �ʽ��ϴ�.\n";

	char c[] = { 'h', 'e', 'l', 'l', 'o' };
	if (search('e', c, 5))
		cout << "e�� �迭 c�� ���ԵǾ� �ֽ��ϴ�.\n";
	else
		cout << "e�� �迭 c�� ���ԵǾ� ���� �ʽ��ϴ�.\n";
	*/

	//���� 5 
	cout << "�� ���� ���� �迭�� ��Ĩ�ϴ�." << endl;
	int x[] = { 1,2,3 };
	int y[] = { 6,7,8,9 };
	int* p = concat(x, 3, y, 4);
	for (int i = 0; i < 7; i++)
		cout << p[i] << ' ';
	cout << endl;
	delete[]p;
	
	cout << "�� ���� ���� �迭�� ��Ĩ�ϴ�" << endl;
	char a[] = { 'L', 'o', 'v', 'e' };
	char b[] = { 'C', '+', '+' };
	char* q = concat(a, 4, b, 3);
	for (int i = 0; i < 7; i++)
		cout << q[i] << ' ';
	cout << endl;
	delete[] q;
}