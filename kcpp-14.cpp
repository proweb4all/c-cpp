#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	int x1, x2;
	cout << "Введите пароль (1): ";
	cin >> x1;
	while (x1 != 1){
		cout << "Пароль неверный! Введите пароль заново (1): ";
		cin >> x1;
	}
	cout << "Молодец, справился... )" << endl;
}
