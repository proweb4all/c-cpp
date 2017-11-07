#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	int n;
	cout <<"Введите целое число: ";
	cin >> n;
	if (n % 2) {
		cout << "Число нечетное\n";
	} else {
		cout << "Число четное\n";
	}
}
