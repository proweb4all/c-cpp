#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <string>
// ������������ - ������������ �������

using namespace std;


class A
{
public:
	A(){
		cout << "����������� A" << endl;
	}
};

class B : public A
{
public:
	B(){
		cout << "����������� B" << endl;
	}
};

class C : protected B
{
public:
	C(){
		cout << "����������� C" << endl;
	}
};

int main()
{	
	setlocale(LC_ALL, "Rus");
	C c;
	system("pause");
}


