#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <string>
// Абстрактные классы, чисто виртуальные функции, virtual-override


using namespace std;

class A
{
public:
	A(){
		cout << "Конструктор A" << endl;
	}
	virtual ~A(){
		cout << "Деструктор A" << endl;
	}
};

class B : public A
{
public:
	B(){
		cout << "Конструктор B" << endl;
	}
	~B() override
	{
		cout << "Деструктор B" << endl;
	}
};


int main()
{	
	setlocale(LC_ALL, "Rus");

	A *b = new B;
	delete b;
	
	system("pause");
}


