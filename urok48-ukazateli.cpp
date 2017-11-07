#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
//#include <iomanip>

using namespace std;


int foo(int *pn){
	(*pn)++;
}


int main() 
{
	setlocale(LC_ALL, "Rus");
	int n = 0;
	cout << n << endl;
	foo(&n);
	cout << n << endl;
}
