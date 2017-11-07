#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	int rows, cols;
	cout << "¬ведите размер массива (N и M): ";
	cin >> rows >> cols;
	
	int **arr = new int* [rows];


	delete [] arr;
	system("pause");
    return 0;
}

