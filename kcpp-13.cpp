#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	int x1, x2;
	cout << "������� ��� ����� ��������: ";
	cin >> x1 >> x2;
	char op;
	cout << "������� �������� ����� ���������� (+ - * /) ";
	cin >> op;
	
	switch (op) {
		case '+':
			cout << "���������: " << x1 + x2;
			break;
		case '-':
			cout << "���������: " << x1 - x2;
			break;
		case '*':
			cout << "���������: " << x1 * x2;
			break;
		case '/':
			cout << "���������: " << (float)x1 / x2;
			break;
		default:
			cout << "�� ���� ����� ��������...  :)\n";
	}
}
