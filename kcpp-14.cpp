#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	int x1, x2;
	cout << "������� ������ (1): ";
	cin >> x1;
	while (x1 != 1){
		cout << "������ ��������! ������� ������ ������ (1): ";
		cin >> x1;
	}
	cout << "�������, ���������... )" << endl;
}
