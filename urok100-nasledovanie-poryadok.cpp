#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <string>
// Наследование - модификаторы доступа

using namespace std;


class A
{
public:
	A(){
		cout << "Конструктор A" << endl;
	}
};

class B : public A
{
public:
	B(){
		cout << "Конструктор B" << endl;
	}
};

class C : protected B
{
public:
	C(){
		cout << "Конструктор C" << endl;
	}
};

int main()
{	
	setlocale(LC_ALL, "Rus");
	C c;
	system("pause");
}


