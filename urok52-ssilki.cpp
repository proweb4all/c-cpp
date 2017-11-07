#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
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
template <typename T>
void chngss(T &a, T &b){
	T c = a;
	a = b;
	b = c;
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

	cout << "---------Ссылки---------" << endl;
	char str1[] = "Первый", str2[] = "Второй";
	cout << "str1 = " << str1 << endl;
	cout << "str2 = " << str2 << endl;
	chngss(*str1, *str2);
	cout << "-------- chngss --------" << endl;
	cout << "str1 = " << str1 << endl;
	cout << "str2 = " << str2 << endl;
	cout << ")))" << endl;
	cout << "------------------------" << endl;
	string ss1 = "Первый", ss2 = "Второй";
	cout << "ss1 = " << ss1 << endl;
	cout << "ss2 = " << ss2 << endl;
	chngss(ss1, ss2);
	cout << "-------- chngss --------" << endl;
	cout << "ss1 = " << ss1 << endl;
	cout << "ss2 = " << ss2 << endl;
	cout << "------------------------" << endl;
	float s1 = 15.15, s2 = 25.25;
	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;
	chngss(s1, s2);
	cout << "-------- chngss --------" << endl;
	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;
}
