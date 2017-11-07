#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	double arr[] = {13, 134, 245, 3245};
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
		cout << arr[i] << endl;
	}
}
