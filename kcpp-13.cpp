#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	int x1, x2;
	cout << "Введите два целых операнда: ";
	cin >> x1 >> x2;
	char op;
	cout << "Введите операцию между операндами (+ - * /) ";
	cin >> op;
	
	switch (op) {
		case '+':
			cout << "Рузультат: " << x1 + x2;
			break;
		case '-':
			cout << "Рузультат: " << x1 - x2;
			break;
		case '*':
			cout << "Рузультат: " << x1 * x2;
			break;
		case '/':
			cout << "Рузультат: " << (float)x1 / x2;
			break;
		default:
			cout << "Не знаю такой операции...  :)\n";
	}
}
