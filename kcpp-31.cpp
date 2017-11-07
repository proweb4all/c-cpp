#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int const COL = 9;
	int const ROW = 9;
	int arr[ROW][COL];

    int A = -100;
    int B = 100;
	cout << "Случайные числа в диапазоне от " << A << " до " << B << endl;

    for(int i = 0; i < ROW; i++) {
	    for(int j = 0; j < COL; j++) {
    	    cout << (arr[i][j] = A + rand() % ((B + 1) - A)) << '\t';
		}
	    cout << endl;
    }
    cout << arr << endl;
    cout << arr[0] << endl;
    cout << arr[1] << endl;
	


}
