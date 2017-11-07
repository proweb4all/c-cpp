#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	int x1 = 0, y;
	cout << "¬ведите целое число y: ";
	cin >> y;

	do {
		cout << "do while x=" << x1 << endl;
		x1++;
	}while (x1 < y);
	
}
