#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <fstream>
//#include <string>
//#include <iomanip>
#include <cstdlib>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Rus");
	int i, j, size;
	cout << "¬ведите размер динамического массива: ";
	cin >> size;
	int *arr = new int[size];
	for (int i = 0; i < size; i++){
		arr[i] = rand() % 10;
		cout << arr[i] << "\t" << arr + i << endl;
	}
	delete [] arr;
}
