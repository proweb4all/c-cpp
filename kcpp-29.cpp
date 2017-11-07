#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int const SIZE = 8;
	int arr[SIZE];

    int A = -1000;
    int B = 1000;
	cout << "Случайные числа в диапазоне от " << A << " до " << B << endl;

     for(int i = 0; i < SIZE; i++) {
        cout << (arr[i] = A + rand() % ((B + 1) - A)) << '\t';
//        cout << (arr[i] = rand()) << '\t';
    }
    cout << endl;
     for(int i = 0; i < SIZE; i++) {
        cout << arr[i] << '\t';
    }
    cout << endl;
	arr[10] = 100;
    cout << arr[10] << endl;
    cout << arr << endl;
	


}
