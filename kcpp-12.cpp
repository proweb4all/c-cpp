#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	int n;
	cout <<"������� ����� �����: ";
	cin >> n;
	if (n % 2) {
		cout << "����� ��������\n";
	} else {
		cout << "����� ������\n";
	}
}
