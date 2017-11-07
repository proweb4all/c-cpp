#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	int i, j, rows, cols;
	cout << "¬ведите размер массива (N и M): ";
	cin >> rows >> cols;
	
	int **arr = new int* [rows];


	for (i = 0; i < rows; i++){
		arr[i] = new int[cols];
		cout << arr[i] << "\t";
		for (j = 0; j < cols; j++){
			arr[i][j] = i * 10 + j;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	for (i = 0; i < rows; i++){
		delete [] arr[i];
	}
	delete [] arr;
	system("pause");
    return 0;
}

