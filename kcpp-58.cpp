#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	int i, size = 10;
	int *arr1 = new int[size];
	int *arr2 = new int[size];
	cout << "arr1\t" << "&arr1\t\t" << "arr2\t" << "&arr2\n";
	for (i = 0; i < size; i++){
		arr1[i] = i;
		arr2[i] = 10 + i;
		cout << arr1[i] << "\t" << &arr1[i] << "\t" << arr2[i] << "\t" << &arr2[i] << "\n";
	}
	cout << "-------------- Копируем arr1 в arr2 ---------------\n";
	delete [] arr1;
	//(int*)malloc(N * M * sizeof(int));
	arr1 = new int[size];
	cout << "arr1\t" << "&arr1\t\t" << "arr2\t" << "&arr2\n";
	//arr1 = arr2;
	for (i = 0; i < size; i++){
		arr1[i]	= arr2[i];
		cout << arr1[i] << "\t" << &arr1[i] << "\t" << arr2[i] << "\t" << &arr2[i] << "\n";
	}
	delete [] arr1;
	delete [] arr2;
	system("pause");
    return 0;
}

