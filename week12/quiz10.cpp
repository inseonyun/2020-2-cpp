/* iterator�� ����Ͽ� vector�� ��� ���ҿ� 2 ���ϱ�
#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v; // ���� ���� ����
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	vector<int>::iterator it; //���� v�� ���ҿ� ���� ������ it ����

	for (it = v.begin(); it != v.end(); it++) {
		//iterator�� �̿��Ͽ� ��� ���� Ž��
		int n = *it; // it�� ����Ű�� ���� �� ����
		n = n * 2; // ���� ���� 2�� ���Ͽ� ����
		*it = n; // it�� ����Ű�� ���ҿ� 2�� ���� �� ����
	}
	for (it = v.begin(); it != v.end(); it++) 
		cout << *it << ' ';
	cout << endl;
}
*/