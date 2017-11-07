#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
//#include <iomanip>

using namespace std;


int factl(int n){
	if (n == 0) return 1;
	return factl(n-1)*n;
}


int main() 
{
	setlocale(LC_ALL, "Rus");
	for (int i = 0; i < 11; i++){
		cout << "Факториал(" << i << ") = " << factl(i) << endl;
	}
}
