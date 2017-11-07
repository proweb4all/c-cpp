#include <iostream>
#include <cstdlib>

using namespace std;



void fillArray(int* const arr, const int size){
	for (int i = 0; i < size; i++){
		arr[i] = rand() % 10;
	}
}
void showArray(const int* const arr, const int size){
	for (int i = 0; i < size; i++){
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void push_back(int *&arr, int &size, const int value){
	int *newArray = new int[size + 1];
	for (int i = 0; i < size; i++){
		newArray[i] = arr[i];
	}
	newArray[size] = value;
	size++;
	delete [] arr;
	arr = newArray;
}

void push_front(int *&arr, int &size, const int value){
	int *newArray = new int[++size];
	for (int i = 1; i < size; i++){
		newArray[i] = arr[i-1];
	}
	newArray[0] = value;
	delete [] arr;
	arr = newArray;
}

void pop_back(int *&arr, int &size){
	int *newArray = new int[--size];
	for (int i = 0; i < size; i++){
		newArray[i] = arr[i];
	}
	delete [] arr;
	arr = newArray;
}

void pop_front(int *&arr, int &size){
	int *newArray = new int[--size];
	for (int i = 0; i < size; i++){
		newArray[i] = arr[i+1];
	}
	delete [] arr;
	arr = newArray;
}


int main(){
	setlocale(LC_ALL, "rus");
	int size = 5;
	int *arr1 = new int[size];
	fillArray(arr1, size);
	showArray(arr1, size);
	push_back(arr1, size, 55);
	showArray(arr1, size);
	pop_back(arr1, size);
	showArray(arr1, size);
	push_front(arr1, size, 66);
	showArray(arr1, size);
	pop_front(arr1, size);
	showArray(arr1, size);

	delete [] arr1;
	system("pause");
    return 0;
}

