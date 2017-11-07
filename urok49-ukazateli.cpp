#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
//#include <iomanip>

using namespace std;


int foo(int *pa, int *pb, int *pc){
	(*pa)++;
	(*pb)--;
	(*pc)+=100;
}
void chng(int *pa, int *pb){
	int c = *pa;
	*pa = *pb;
	*pb = c;
}

int main() 
{
	setlocale(LC_ALL, "Rus");
	int a = 0, b = 0, c = 0;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	foo(&a, &b, &c);
	cout << "--------- foo ---------" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	chng(&a, &b);
	cout << "--------- chng ---------" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
