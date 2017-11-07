#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void fillArr(int* arr, int const COL, int const ROW);
void printArr(int* arr, int const COL, int const ROW);

void fillArr1(int arr1[], int const COL);
void printArr1(int arr1[], int const COL);

int main(){
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int const COL = 9;
	int const ROW = 9;
	int arr[ROW][COL];
	int arr1[COL];

	cout << "main arr1\t" << arr1 << endl;
	cout << "main size\t" << sizeof(arr1) << endl;
	fillArr1(arr1, COL);
	printArr1(arr1, COL);
	
	//cout << "&arr[0][0]\t" << &arr[0][0] << endl;
	//cout << "arr\t\t" << arr << endl;

	//fillArr(&arr[0][0], ROW, COL);
	//printArr(&arr[0][0], ROW, COL);

/*    int A = -100;
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
    cout << arr[1] << endl;*/
}

void fillArr(int* arr, int const COL, int const ROW)
{
    int A = -100;
    int B = 100;
    for(int i = 0; i < ROW; i++) {
	    for(int j = 0; j < COL; j++) {
//    	    arr[i][j] = A + rand() % ((B + 1) - A));
    	    arr[i * COL + j] = i * COL + j;
		}
    }
}

void printArr(int* arr, int const COL, int const ROW)
{
	cout << "Случайные числа в массиве 9*9 в диапазоне от -100 до 100: " << endl;

    for(int i = 0; i < ROW; i++) {
	    for(int j = 0; j < COL; j++) {
    	    cout << arr[i * COL + j] << '\t';
		}
	    cout << endl;
    }
    cout << "Типа адрес массива" << arr << endl;
}

void fillArr1(int arr1[], int const COL)
{
	cout << "fillArr1 arr1\t" << arr1 << endl;
	cout << "fillArr1 size\t" << sizeof(arr1) << endl;
    int A = -100;
    int B = 100;
    for(int i = 0; i < COL; i++) {
//    	    arr[i][j] = A + rand() % ((B + 1) - A));
    	    arr1[i] = i;
    }
}

void printArr1(int arr1[], int const COL)
{
    //cout << "\nТипа адрес массива" << arr1 << endl;
	//cout << "Случайные числа в массиве 9*9 в диапазоне от -100 до 100: " << endl;
	cout << "printArr1 arr1\t" << arr1 << endl;
	cout << "printArr1 size\t" << sizeof(arr1) << endl;
    for(int i = 0; i < COL; i++) {
    	    cout << arr1[i] << '\t';
    }
    cout << "\nТипа адрес массива" << arr1 << endl;
}

